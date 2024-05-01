#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *array;
    printf("Enter a number for n: ");
    scanf("%d", &n);
    getchar();

    array = (int *)malloc(n * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    FILE *fp;
    if ((fp = fopen("numbersBin.bin", "wb+")) == NULL)
    {
        printf("Unable to open/create file. (bin)\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter element #%d: ", (i + 1));
        int num = 0;
        char symbol;
        while ((symbol = getchar()) != '\n' && symbol != EOF)
        {
            if (symbol >= '0' && symbol <= '9')
            {
                num = num * 10 + (symbol - '0');
            }
        }
        array[i] = num;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n", array[i]);
    }
    fclose(fp);

    int num;
    int counterEven = 0, counterOdd = 0;

    fp = fopen("numbersBin.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        exit(2);
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            counterEven++;
        }
        else
        {
            counterOdd++;
        }
    }
    printf("The amount of even numbers: %d\n", counterEven);
    printf("The amount of odd numbers: %d\n", counterOdd);
    fclose(fp);

    FILE *fp_2;
    if ((fp_2 = fopen("numbersSortedTxt.txt", "w+")) == NULL)
    {
        printf("Unable to open/create file. (txt)\n");
        exit(3);
    }

    int temp;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp_2, "%d\n", array[i]);
    }

    fclose(fp_2);

    free(array);
    return 0;
}
