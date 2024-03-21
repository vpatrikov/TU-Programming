#include <stdio.h>

void decimal_to_binary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }

    printf("\n");
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    decimal_to_binary(a);
    return 0;
}