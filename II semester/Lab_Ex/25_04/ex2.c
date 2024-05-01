#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car
{
    int year;
    char brand[30];
}Car;

void fill_car(Car* car)
{
    scanf("%d", &car->year);
    getchar();
    fgets(car->brand, 30, stdin);
    car->brand[strlen(car->brand)-1] = '\0';
}

void print_car(Car* car)
{
    printf("The year of the car is: %d\n", car->year);
    printf("The brand of the car is: %s", car->brand);
}

int main()
{
    Car car;
    fill_car(&car);
    print_car(&car);
    FILE *fp;
    if((fp = fopen("cars.bin", "wb")) == NULL)
    {
        printf("Cannot open binary file for writing.");
        exit(1);
    }
    
    fwrite(&car, sizeof(car), 1, fp);
    
    fclose(fp);
    
    return 0;
}