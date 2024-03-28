#include <stdio.h>

void draw_castle(int n)
{
    int width = 2 * n;
    int height = n;
    int width_inside = n / 2;

    for (int i = 0; i < height; i++)
    {
        if (i == 0 || i == height - 1)
        {
            printf("/");
            for (int j = 0; j < width_inside; j++)
            {
                printf("^");
            }
            printf("\\");
        }

        if (n > 4 && i == width_inside)
        {
            for (int i = 0; i < width_inside + 1; i++)
            {
                printf("_");
            }
            
        }
    }

    printf("\n");

    for (int i = 0; i < height - 2; i++)
    {
        printf("|");
        for (size_t i = 0; i < width - 1; i++)
        {
            printf(" ");
        }
        printf("|");
        printf("\n");
    }

    for (int i = 0; i < height; i++)
    {
        if (i == 0 || i == height - 1)
        {
            printf("/");
            for (int j = 0; j < width_inside; j++)
            {
                printf("_");
            }
            printf("\\");
        }

        if (n > 4 && i == width_inside)
        {
            for (int i = 0; i < width_inside + 1; i++)
            {
                printf("‾");
            }
            
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    draw_castle(n);
    return 0;
}