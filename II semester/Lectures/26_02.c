#include <stdio.h>

void increment(int *x) // ? kum first_prog
{
    (*x)++;
}
void first_prog()
{
    int x = 5;
    int *p = &x; // ! pointer - vzima adresa na promenlivata. zvezdichkata znachi value & znachi adres
    printf("Before change: %d\n", x);
    increment(p);
    printf("Address of var: %p\n", p);
    printf("After change: %d\n\n\n", x);
}

void second()
{
    int array[5] = {14, 52, 42, 52, 7};
    int *p = array;

    for (size_t i = 0; i < 5; i++)
    {
        printf("The %d element of the array: %d; %p\n", i, *p, (void *)p);
        p++;
    }
}

int* increment_2(int num[5])
{
    static int resultArr[5];
    for (int i = 0; i < 5; i++)
    {
        resultArr[i] = num[i] + 2; 
    }

    return resultArr;
    
}

int main()
{
    int num []= {14, 13, 41, 3, 13};
    int* arr = increment_2(num);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}