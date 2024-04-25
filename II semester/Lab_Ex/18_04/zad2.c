#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vehicle
{
    char type[20];
    char class[3];
    int weight;
};

struct Car
{
    struct Vehicle car;
    char brand[50];
    char model[50];
    int year_of_manufacture;
    float mpg;
};

struct Airplane
{
    struct Vehicle airplane;
    char brand[50];
    char model[50];
    int flights_done;
};

struct Motorbike
{
    struct Vehicle motorbike;
    char brand[50];
    char model[50];
    int year_of_manufacture;
    float mpg;
};

void print_car(struct Car car)
{
    printf("Car:\n\n");
    printf("Type: %s\n", car.car.type);
    printf("Class: %s\n", car.car.class);
    printf("Weight: %d\n", car.car.weight);
    printf("Brand: %s\n", car.brand);
    printf("Model: %s\n", car.model);
    printf("Year of Manufacture: %d\n", car.year_of_manufacture);
    printf("MPG: %.2f\n", car.mpg);
    printf("\n");
}

void print_airplane(struct Airplane airplane)
{
    printf("Airplane:\n");
    printf("Type: %s\n", airplane.airplane.type);
    printf("Class: %s\n", airplane.airplane.class);
    printf("Weight: %d\n", airplane.airplane.weight);
    printf("Brand: %s\n", airplane.brand);
    printf("Model: %s\n", airplane.model);
    printf("Flights Done: %d\n", airplane.flights_done);
    printf("\n");
}
int main()
{
    struct Car car_1;
    struct Airplane plane_1;

    printf("Enter data for first vehicle\n\n");
    printf("Enter vehicle type: ");
    scanf("%s", &car_1.car.type);
    printf("Enter vehicle class: ");
    scanf("%s", &car_1.car.class);
    printf("Enter the weight of the vehicle: ");
    scanf("%d", &car_1.car.weight);
    printf("Enter the brand of the vehicle: ");
    scanf("%s", &car_1.brand);
    printf("Enter the model of the vehicle: ");
    scanf("%s", &car_1.model);
    printf("Enter the year of manufacture of the vehicle: ");
    scanf("%d", &car_1.year_of_manufacture);
    printf("Enter how many miles per galon the vehicle gets: ");
    scanf("%d", &car_1.mpg);

    printf("Enter data for second vehicle\n\n");
    printf("Enter vehicle type: ");
    scanf("%s", &plane_1.airplane.type);
    printf("Enter vehicle class: ");
    scanf("%s", &plane_1.airplane.class);
    printf("Enter the weight of the vehicle: ");
    scanf("%d", &plane_1.airplane.weight);
    printf("Enter the brand of the vehicle: ");
    scanf("%s", &plane_1.brand);
    printf("Enter the model of the vehicle: ");
    scanf("%s", &plane_1.model);
    printf("Enter the amount of flights done by the vehicle: ");
    scanf("%d", &plane_1.flights_done);

    printf("First Vehicle:\n");
    print_car(car_1);

    printf("Second Vehicle:\n");
    print_airplane(plane_1);

    if (strcmp(car_1.car.type, plane_1.airplane.type) != 0)
    {
        printf("\nThe type of the vehicles is different\n");
    }

    if (strcmp(car_1.car.class, plane_1.airplane.class) != 0)
    {
        printf("The classes of the vehicles are different\n");
    }

    if (car_1.car.weight > plane_1.airplane.weight)
    {
        printf("The first vehicle is heavier than the second one.\n");
    }
    else if (car_1.car.weight == plane_1.airplane.weight)
    {
        printf("Both vehicles have the same weight");
    }
    else
    {
        printf("The second vehicle is heavier than the first one.\n");
    }

    return 0;
}