#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int people_amount;
    scanf("%d", &people_amount);

    int chairs_sum = 0, tables_sum = 0, cups_sum = 0, dishes_sum = 0;
    double total_spent = 0;

    char input[11];
    while (strcmp(input, "PARTY!") != 0)
    {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "Chair") == 0)
        {
            chairs_sum += 1;
            total_spent += 13.99;
        }
        else if (strcmp(input, "Table") == 0)
        {
            tables_sum += 1;
            total_spent += 42;
        }
        else if (strcmp(input, "Cups") == 0)
        {
            cups_sum += 8;
            total_spent += 5.98;
        }
        else if (strcmp(input, "Dishes") == 0)
        {
            dishes_sum += 8;
            total_spent += 21.02;
        }
    }

    printf("%.2lf\n", total_spent);

    int tables_needed = (people_amount + 7) / 8;
    int cups_needed = (people_amount + 5) / 6;
    int dishes_needed = (people_amount + 5) / 6;

    if (chairs_sum < people_amount)
    {
        printf("%d Chair/s\n", (people_amount - chairs_sum));
    }
    if (dishes_sum < people_amount)
    {
        printf("%d Dishes\n", (dishes_needed * 6 - dishes_sum));
    }
    if (cups_sum < people_amount)
    {
        printf("%d Cups\n", (cups_needed * 6 - cups_sum));
    }
    if (tables_sum < people_amount)
    {
        printf("%d Table/s\n", (tables_needed - tables_sum));
    }

    return 0;
}
