#include <stdio.h>

void print_butterfly(int n)
{
    int width = 2 * n - 1;
    int height = 2 * (n - 1) + 1;
    int width_part = n - 1;
    int half = height / 2;

    for (int i = 1; i < half; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= width_part; j++)
            {
                if (j != width_part)
                {
                    printf("-");
                }
                else
                {
                    printf("\\ ");
                }
            }
            for (int y = 1; y <= width_part; y++)
            {
                if (y == 1)
                {
                    printf("/");
                }
                else
                {
                    printf("-");
                }
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= width_part; j++)
            {
                if (j != width_part)
                {
                    printf("*");
                }
                else
                {
                    printf("\\ ");
                }
            }
            for (int y = 1; y <= width_part; y++)
            {
                if (y == 1)
                {
                    printf("/");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }

    for (int i = 0; i < width; i++)
    {
        if (i != half)
        {
            printf(" ");
        }
        else
        {
            printf("@");
        }
    }

    printf("\n");

    for (int i = 1; i < half; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= width_part; j++)
            {
                if (j != width_part)
                {
                    printf("-");
                }
                else
                {
                    printf("/ ");
                }
            }
            for (int y = 1; y <= width_part; y++)
            {
                if (y == 1)
                {
                    printf("\\");
                }
                else
                {
                    printf("-");
                }
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= width_part; j++)
            {
                if (j != width_part)
                {
                    printf("*");
                }
                else
                {
                    printf("/ ");
                }
            }
            for (int y = 1; y <= width_part; y++)
            {
                if (y == 1)
                {
                    printf("\\");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    print_butterfly(n);
}