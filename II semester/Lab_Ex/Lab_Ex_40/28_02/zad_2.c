#include <stdio.h>
int main (void)
{
    float money_bgn, money_convert;
    int choice;
    printf("Enter amount of lev: \n");
    scanf("%f", &money_bgn);
    printf("What do you want to convert to?");
    printf("\n1. Euro\n2. Dollar (USD)\n3. British Pounds\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        money_convert = money_bgn * 1.95583;
        printf("Leva: %.2f\nEuro: %.2f", money_bgn, money_convert);
        break;
    case 2:
        money_convert = money_bgn * 1.801967;
        printf("Leva: %.2f\nUSD: %.2f", money_bgn, money_convert);
        break;
    case 3:
        money_convert = money_bgn * 2.288077;
        printf("Leva: %.2f\nBritish pounds: %.2f", money_bgn, money_convert);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}