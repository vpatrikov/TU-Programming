#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char name[21];
    int uid;
    char expire_date[11];
    double price;
} Product;

double avrg_by_price(Product *array, int size, double price)
{
    double sum = 0, counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i].price < price)
        {
            sum += array[i].price;
            counter++;
        }
    }

    if (counter > 0)
    {
        double avg = sum / counter;
        return avg;
    }
    else
    {
        return 0;
    }
}

int write_text_file(Product *array, int size, char date[11], double price)
{
    int counter = 0;

    FILE *fp;

    fp = fopen("products.txt", "a");

    if (fp == NULL)
    {
        printf("Unable to open or create file.");
        exit(1);
    }

    int filter_day, filter_month, filter_year;

    sscanf(date, "%d.%d.%d", &filter_day, &filter_month, &filter_year);

    for (int i = 0; i < size; i++)
    {
        int day, month, year;
        sscanf(array[i].expire_date, "%d.%d.%d", &day, &month, &year);

        if (day < filter_day && month < filter_month && year < filter_year)
        {
            if (array[i].price > price)
            {
                fprintf(fp, "%s-%d-%s-%.2lfлв.\n", array[i].name, array[i].uid, array[i].expire_date, array[i].price);
                counter++;
            }
        }
    }

    fclose(fp);

    if (counter > 0)
    {
        return counter;
    }
    else
    {
        return 0;
    }
}

void print_info(int uid)
{
    FILE *fp;

    fp = fopen("product.bin", "r");

    if (fp == NULL)
    {
        printf("Unable to open file.");
        exit(2);
    }

    int id;
    char name[21], expire_date[11];
    double price;
    bool found = false;

    while (fscanf(fp, "%d %s %s %lf", &id, name, expire_date, &price) != EOF)
    {
        if (id == uid)
        {
            printf("Данни за продукт: %s - използвай преди %s - цена %.2lf лв.\n", name, expire_date, price);
            found = true;
            break;
        }
    }
    
    if (!found)
    {
        printf("Product with ID %d not found.\n", uid);
    }
    
    fclose(fp);
}

int main()
{
    int n;
    while (1)
    {
        printf("Enter n: ");
        scanf("%d", &n);

        if (n > 10 && n < 30)
        {
            break;
        }
        else
        {
            printf("Invalid Input!\n");
        }
    }

    Product *array;
    array = (Product *)malloc(n * sizeof(Product));

    if (!array)
    {
        printf("Unable to allocate memory");
        exit(3);
    }

    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("Product #%d\n\n", (i + 1));

        printf("Enter name: ");
        fgets(array[i].name, sizeof(array[i].name), stdin);
        array[i].name[strcspn(array[i].name, "\n")] = '\0';
        printf("Enter id: ");
        scanf("%d", &array[i].uid);
        getchar();
        printf("Enter date of expiration: ");
        fgets(array[i].expire_date, sizeof(array[i].expire_date), stdin);
        array[i].expire_date[strcspn(array[i].expire_date, "\n")] = '\0';
        printf("Enter price: ");
        scanf("%lf", &array[i].price);
        getchar();
    }

    double average_price = avrg_by_price(array, n, 100.0);
    printf("Average price below 100: %.2lf\n", average_price);
    write_text_file(array, n, "01.01.2023", 50.0);
    print_info(123);

    free(array);
    return 0;
}
