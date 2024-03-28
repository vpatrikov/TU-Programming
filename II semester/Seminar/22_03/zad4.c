#include <stdio.h>

double bonus(int *p)
{
    double bonus_p;

    if (*p <= 100)
    {
        bonus_p = 5;
    }
    else if (*p > 100 && *p <= 1000)
    {
        bonus_p = *p * 0.2;
    }
    else
    {
        bonus_p = *p * 0.1;
    }

    if ((int)bonus_p % 2 == 0)
    {
        bonus_p++;
    }
    int last_digit = (int)bonus_p % 10;

    if(last_digit == 5)
    {
        bonus_p += 2;
    }

    return bonus_p;
}

int main()
{
    int points;

    printf("Enter the points: ");

    scanf("%d", &points);

    double bonusAmount = bonus(&points);
    printf("\n%.2lf\n", bonusAmount);

    double final = bonusAmount + points;
    printf("%.2lf\n", final);

    return 0;
}