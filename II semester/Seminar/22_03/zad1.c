#include <stdio.h>

double larger_num(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double smaller_num(double a, double b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main ()
{
    double a, b;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    printf("\nThe larger num is %.2lf", larger_num(a, b));
    printf("\nThe smaller num is %.2lf\n", smaller_num(a,b));
    return 0;
}