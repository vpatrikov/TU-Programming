#include <stdio.h>
#include <string.h>

struct Car{
    char brand [30];
    int horsepower;
};

typedef struct Car car;

int main ()
{
    car car1;
    strcpy(car1.brand, "Opel");

}