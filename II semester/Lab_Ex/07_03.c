#include <stdio.h>

void zad_1()
{
    int a;
    printf("Enter a: \n");
    scanf("%d", &a);

    if (a > 6)
    {
        printf("a is smaller than 6.\n");
    }
    else
    {
        printf("a is equal to or bigger than 6.");
    }
}

void zad_2()
{
    int b;
    printf("Enter b:\n");
    scanf("%d", &b);

    if (b % 8 > 4)
    {
        printf("The remainder of %d / 8 is greater than 4", b);
    }
}

void zad_3()
{
    int a, b, c;

    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("%d is the largest number.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number.\n", a);
    }
    else
    {
        printf("%d is the largest number.\n", c);
    }
}

void zad_4()
{
    int a;
    printf("Enter a: \n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("One.\n");
        break;
    case 2:
        printf("Two.\n");
        break;
    case 3:
        printf("Three.\n");
        break;
    default:
        printf("Invalid Number.");
        break;
    }
}

void zad_5()
{
    int a;
    printf("Enter the number of the weekday: \n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    case 7:
        printf("Sunday.\n");
        break;
    default:
        printf("Invaild number of day.\n");
        break;
    }
}

void zad_6()
{
    int n, i, j;

    printf("Enter n: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
}
void zad_7()
{
    int a, b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);

    int result = 0;
    if (b > a)
    {
        for (int i = a + 1; i < b; i++)
        {
            result += i;
            if (i == b - 1)
            {
                printf("%d = ", i);
            }
            else
            {
                printf("%d + ", i);
            }
        }
    }
    else
    {
        for (int i = b + 1; i < a; i++)
        {
            result += i;
            if (i == a - 1)
            {
                printf("%d = ", i);
            }
            else
            {
                printf("%d + ", i);
            }
        }
    }

    printf("%d\n", result);
}

void zad_8()
{
    int a, b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);

    int sum = 0;
    int prod = 1;

    if (a > b)
    {
        printf("%d should be smaller than %d.\n", a, b);
    }
    else
    {
        for (int i = a + 1; i < b; i++)
        {
            if (a % 2 == 0)
            {
                sum += i;
            }
            else
            {
                prod *= i;
            }
        }
    }

    printf("The sum of the even numbers is: %d\n", sum);
    printf("The prod of the odd numbers is: %d\n", prod);
}

void zad_9()
{
    int n, k, temp;
    printf("Enter n:\n");
    scanf("%d", &n);
    printf("Enter k:\n");
    scanf("%d", &k);

    int count = 0;

    for (int i = 0; i <= n; i++)
    {
        printf("Enter %d number: \n");
        scanf("%d", temp);

        if (temp > k && temp % 3 == 0)
        {
            count++;
        }
    }
}

void zad_10()
{
    int a, sum;
    sum = 0;
    do
    {
        printf("Enter a number:\n");
        scanf("%d", &a);
        sum += a;
    } while (a != 0);

    printf("The sum of the numbers is equal to %d", sum);
}

void zad_11()
{
    double start, end;

    printf("Enter the start: ");
    scanf("%lf", &start);

    printf("Enter the end: ");
    scanf("%lf", &end);

    printf("Values for f(x) = x*x - 4 in [%lf, %lf] with step 0.01:\n", start, end);

    for (double x = start; x <= end; x += 0.01)
    {
        double result = x * x - 4;
        printf("f(%lf) = %lf\n", x, result);
    }
}

int main()
{
    zad_7();
    return 0;
}