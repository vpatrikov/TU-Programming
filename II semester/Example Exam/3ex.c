#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char uid[3];
    char productName[21];
    int weight;
    double pricePerKg;
} IceCream;

double SumOfPriceFilter(IceCream *icecreams, int n, char letter)
{
    double priceSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (letter == icecreams[i].productName[0])
        {
            priceSum += icecreams[i].pricePerKg;
            count++;
        }
    }

    if (!priceSum)
    {
        return 0;
    }
    else
    {
        return priceSum;
    }
}

int WriteSelectedElementsToTxt(IceCream *icecreams, int n, double price, int weight)
{
    FILE *pf;
    pf = fopen("info.txt", "a+");

    if (!pf)
    {
        printf("Error opening file.");
        exit(1);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (icecreams[i].pricePerKg < price && icecreams[i].weight > weight)
        {
            fprintf(pf, "%s; %s; %d; %.2lf leva\n", icecreams[i].uid, icecreams[i].productName, icecreams[i].weight, icecreams[i].pricePerKg);
            count++;
        }
    }

    if (!count)
    {
        return 0;
    }
    else
    {
        return count;
    }
}
int main()
{
    int n;
    IceCream *icecreams;

    while (1)
    {
        printf("Enter n: ");
        scanf("%d", &n);

        if (n > 5 && n < 15)
        {
            break;
        }
        else
        {
            printf("Invalid Input (should be between 5 and 15).\n");
        }
    }

    icecreams = (IceCream *)malloc(n * sizeof(IceCream));

    if (!icecreams)
    {
        printf("Unable to allocate memory");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter UID: ");
        scanf("%2s", &icecreams[i].uid);
        printf("Enter name: ");
        scanf("%30s", &icecreams[i].productName);
        printf("Enter weight (in kg): ");
        scanf("%d", &icecreams[i].weight);
        printf("Enter price per kg: ");
        scanf("%lf", &icecreams[i].pricePerKg);
    }
}
