#include <stdio.h>

int main (void)
{
    double inches;

    printf("Enter length in millimiters: \n");
    scanf("%lf", &inches);
    
    double millimeters = inches * 25.4;
    double centimeters = inches * 2.54;
    double decimeters = inches * 0.254;
    double meters = inches * 0.0254;

    printf("%.2f inches are:\n", inches);
    printf("%.2f millimeters\n", millimeters);
    printf("%.2f centimeters\n", centimeters);
    printf("%.2f decimeters\n", decimeters);
    printf("%.2f meters\n", meters);
}