#include <stdio.h>

#define PI 3.14

void zad_1()
{
    printf("Hello World\t");
    printf("Tabbed hello world\n");
    printf("New lined hello world");
    printf("\rRewritten hello world");
}

void zad_2()
{
    char a;
    a = 'A';
    printf("ASCII number of variable: %d\n", a);
    printf("Value of variable: %c", a);
}

void zad_3()
{
    int a, b, s;

    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    s = a * b;
    printf("\nThe area of the rectangle is %d", s);
}

void zad_4()
{
    int d;
    float p;
    printf("Enter d:\n");
    scanf("%d", &d);
    p = 2*PI*d/2;
    printf("The perimeter of the circle is %.2f", p);
}
int main()
{
    zad_4();
    return 0;
}