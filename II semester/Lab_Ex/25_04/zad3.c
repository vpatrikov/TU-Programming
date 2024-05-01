#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car
{
    char brand[6];
    char model[6];
    unsigned int engine_volume;
    double price;
    char registered;
} Car;

void CreateCarAndWriteToFiles()
{
    Car car;
    FILE *pf_1, *pf_2;
    pf_1 = fopen("carsText.txt", "a+");
    pf_2 = fopen("carsBin.bin", "ab+");

    if (pf_1 == NULL || pf_2 == NULL)
    {
        printf("Unable to create/open file.\n");
        exit(1);
    }

    printf("Enter the brand of the car: ");
    fgets(car.brand, sizeof(car.brand), stdin);
    car.brand[strcspn(car.brand, "\n")] = '\0';

    printf("Enter the model of the car: ");
    fgets(car.model, sizeof(car.model), stdin);
    car.model[strcspn(car.model, "\n")] = '\0';

    printf("Enter the engine volume: ");
    scanf("%u", &car.engine_volume);
    getchar();

    printf("Enter the price of the car: ");
    scanf("%lf", &car.price);
    getchar();

    printf("Enter if the car is registered (y/n): ");
    scanf(" %c", &car.registered);
    getchar();

    fprintf(pf_1, "%s %s %u %.2lf %c\n", car.brand, car.model, car.engine_volume, car.price, car.registered);
    fwrite(&car, sizeof(Car), 1, pf_2);

    fclose(pf_1);
    fclose(pf_2);
}

void PrintCarDataFromFiles()
{
    FILE *pf_1, *pf_2;
    Car car;

    pf_1 = fopen("carsText.txt", "r");
    if (pf_1 == NULL)
    {
        printf("Unable to open carsText.txt.\n");
        exit(1);
    }

    printf("Car data from text file:\n");
    while (fscanf(pf_1, "%s %s %u %lf %c", car.brand, car.model, &car.engine_volume, &car.price, &car.registered) != EOF)
    {
        printf("Brand: %s\n", car.brand);
        printf("Model: %s\n", car.model);
        printf("Engine Volume: %u\n", car.engine_volume);
        printf("Price: %.2lf\n", car.price);
        printf("Registered: %c\n\n", car.registered);
    }
    fclose(pf_1);

    pf_2 = fopen("carsBin.bin", "rb");
    if (pf_2 == NULL)
    {
        printf("Unable to open carsBin.bin.\n");
        exit(1);
    }

    printf("Car data from binary file:\n");
    while (fread(&car, sizeof(Car), 1, pf_2) == 1)
    {
        printf("Brand: %s\n", car.brand);
        printf("Model: %s\n", car.model);
        printf("Engine Volume: %u\n", car.engine_volume);
        printf("Price: %.2lf\n", car.price);
        printf("Registered: %c\n\n", car.registered);
    }
    fclose(pf_2);
}


int main()
{
    CreateCarAndWriteToFiles();

    char choice[3];

    while (1)
    {
        printf("Do you want to add another car?\n");
        scanf("%s", &choice);
        getchar();
        if (strcmp(choice, "yes") == 0)
        {
            CreateCarAndWriteToFiles();
        }
        else
        {
            break;
        }

    }

    PrintCarDataFromFiles();

    return 0;
}