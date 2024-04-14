#include <stdio.h>
#include <stdlib.h>

void zad_1()
{
    int n;

    while (1)
    {
        if (!scanf("%d", &n))
        {
            while (getchar() != '\n')
                printf("Input should be int\n");
        }
        else
        {
            break;
        }
    }

    int *array = (int *)calloc(n, sizeof(int));

    if (array == NULL)
    {
        printf("Unable to allocate memory");
    }

    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }

    array = (int *)realloc(array, ++n);

    for (int i = n - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = n;

    for (int i = 0; i < n; i++)
    {
        printf("The value is: %d\n", array[i]);
    }

    free(array);
}

int main()
{
    zad_1();
    return 0;
}