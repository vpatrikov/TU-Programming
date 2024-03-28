#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car
{
    char *brand;
    char model[30];
    int power;
};

void duska()
{
    struct Car car1;
    strcpy(car1.model, "Corsa");
    car1.brand = (char *)malloc(30 * sizeof(char));

    char **names;
    names = (char **)malloc(5 * sizeof(char *));
    // ? names = (char **)malloc(5 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        names[i] = malloc(30 * sizeof(char)); // moje i samo s 30
        // ? *(names+i) = malloc(30 * sizeof(char));
    }
}

typedef struct anotherCar
{
    char brand[30];
}Car;

int main()
{
    Car mycar;
    mycar.brand = (char*)malloc(20 * sizeof(char));

    printf("%ld\n", sizeof(char*));
    printf("%ld\n", sizeof(int*));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(double));
    printf("%ld\n", sizeof(double*));
    
    return 0;
}