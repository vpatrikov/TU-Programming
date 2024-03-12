#include <stdio.h>
#include <math.h>

void zad_1()
{
    // ? printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 10");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d, ", i);
    }
    
}

void zad_2()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }  
}

void zad_3()
{
    char symbol;
    printf("Enter symbol: ");
    scanf("%c", &symbol);
    for (int i = 0; i < 10; i++)
    {
        printf("%c", symbol);
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("%c\t%c\n", symbol, symbol);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%c", symbol);
    }
}

void zad_4()
{
    char symbol;
    printf("Enter symbol: ");
    scanf("%c", &symbol);


    // scanf("%c", &symbol);
    // printf("    %c\n", symbol);
    // printf("   %c%c%c\n", symbol, symbol, symbol);
    // printf("  %c   %c\n", symbol, symbol);
    // printf(" %c     %c\n", symbol, symbol);
    // printf("%c%c%c%c%c%c%c%c%c\n\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);

    // printf("%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
    // printf(" %c     %c\n", symbol, symbol);
    // printf("  %c   %c\n", symbol, symbol);
    // printf("   %c%c%c\n", symbol, symbol, symbol);
    // printf("    %c\n", symbol);
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}

void zad_5()
{
    double inches;

    int choice;

    printf("Enter inches: ");
    scanf("%lf", &inches);

    double millimeters = inches * 25.4;
    double centimeters = inches * 2.54;
    double decimeters = inches * 0.254;
    double meters = inches * 0.0254;

    printf("\nWhat do you want to convert to?\n\n");
    printf("1. Millimeters\n");
    printf("2. Centimeters\n");
    printf("3. Decimeters\n");
    printf("4. Meters\n\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%.2f inches are %.2f mm.\n", inches, millimeters);
        break;
    case 2:
        printf("%.2f inches are %.2f cm.\n", inches, centimeters);
        break;
    case 3:
        printf("%.2lf inches are %.2f dm.\n", inches, decimeters);
        break;
    case 4:
        printf("%.2f inches are %.2f m.\n", inches, meters);
        break;
    default:
        printf("Invalid Choice.\n");
        break;
    }
}


void zad_6()
{
    double temp_c;

    printf("Enter temperature in celsius: ");
    scanf("%lf", &temp_c);

    double temp_f = (temp_c * 1.8) + 32;

    printf("\n\nCelsius: %.2f\nFarenheit: %.2f\n", temp_c, temp_f);
}

void zad_7()
{
    double degrees;

    printf("Enter degrees: ");
    scanf("%lf", &degrees);

    double rad = degrees * 3.14/180;

    printf("\n\nDegrees: %.2f\nRad: %.2f\n", degrees, rad);
}

void zad_8()
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
}

void zad_9()
{
    double a, b, h;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter h: ");
    scanf("%lf", &h);

    double s = ((a+b)*h) / 2;
    printf("The area of the trapezoid: %.2f", s);
}

void zad_10()
{
    double degrees, radians;

    printf("Enter degrees: ");
    scanf("%lf", &degrees);

    radians = degrees * (3.14/180);

    printf("sin(%.0f) = %.2f\n", degrees, sin(radians));
    printf("cos(%.0f) = %.2f\n", degrees, cos(radians));
    printf("tan(%.0f) = %.2f\n", degrees, tan(radians));
    printf("cot(%.0f) = %.2f\n", degrees, 1.0/tan(radians));
}

void zad_11()
{
    double x1, y1, x2, y2, area;

    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    area = fabs((x1 - x2) * (y1 - y2));
    printf("Area: %.2lf\n", area);
}

void zad_12()
{
    double x1, y1, x2, y2, x3, y3, area;
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter x3 and y3: ");
    scanf("%lf %lf", &x3, &y3);
    area = fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;
    printf("Area: %.2f\n", area);
}

void zad_14()
{
    double pricePerKgVeg, pricePerKgFruit, totalEarningsEuro;
    int totalKgVeg, totalKgFruit;
    const double exchangeRate = 1.95583;

    scanf("%lf", &pricePerKgVeg);
    scanf("%lf", &pricePerKgFruit);
    scanf("%d", &totalKgVeg);
    scanf("%d", &totalKgFruit);

    totalEarningsEuro = ((pricePerKgVeg * totalKgVeg) + (pricePerKgFruit * totalKgFruit)) / exchangeRate;
    
    printf("%.2f\n", totalEarningsEuro);

}

int main ()
{
    zad_4();
    return 0;
}