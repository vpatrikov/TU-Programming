#include <stdio.h>

int main (void)
{
float temp_c;
printf("Enter temp: \n");
scanf("%f", &temp_c);
float temp_f = (9.0/5)*temp_c + 32.0;
printf("Temp in celsius: %f\n\nTemp in fahrenheit: %f", temp_c, temp_f);
return 0;
}