#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size_entered = 0;

void get_input(int *n, int *m, int arr[][*m])
{
    if (size_entered == 0)
    {
        printf("Enter n: ");
        scanf("%d", n);
        printf("Enter m: ");
        scanf("%d", m);
        size_entered++;
    }

    if (arr != NULL)
    {
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < *n; i++)
        {
            for (int j = 0; j < *m; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    }
}

void zad_1()
{
    int n, m;
    get_input(&n, &m, NULL);

    int array[n][m];
    get_input(&n, &m, array);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (array[i][j] > array[i][j + 1] || array[i][j] == array[i][j + 1])
            {
                printf("Row #%d: Not Ascending\n", (i + 1));
                break;
            }
            else
            {
                printf("Row #%d: Ascending\n", (i + 1));
                break;
            }
        }
    }

    printf("\n\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[i][j] > array[i + 1][j] || array[i][j] == array[i + 1][j])
            {
                printf("Column #%d: Not Ascending\n", (i + 1));
                break;
            }
            else
            {
                printf("Column #%d: Ascending\n", (i + 1));
                break;
            }
        }
    }
}

void zad_3()
{
    int n, m;
    get_input(&n, &m, NULL);

    int array[n][m];
    get_input(&n, &m, array);

    int max = 0;
    int min = 2147483647;
    int min_index, max_index;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                max_index = i;
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
                min_index = i;
            }
        }
    }

    printf("\nMax: %d\n", max);
    printf("Min: %d\n", min);

    for (int j = 0; j < m; j++)
    {
        int temp = array[max_index][j];
        array[max_index][j] = array[min_index][j];
        array[min_index][j] = temp;
    }

    printf("Array after swapping rows\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array[i][j]);
        }

        printf("\n");
    }
}

void zad_5()
{
    int n, choice;
    printf("Enter n: ");
    scanf("%d", &n);

    int *array;
    array = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter element #%d: ", (i + 1));
        scanf("%d", &array[i]);
    }

    printf("What do you want to do?\n1. Add a number\n2. Delete a number\n3. Find the smallest number\n");
    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the number to add: ");
            scanf("%d", &array[n]);
            n++;
        }
        break;

        case 2:
        {
            printf("Enter the index of the number to delete: ");
            int index;
            scanf("%d", &index);
            if (index >= 0 && index < n)
            {
                for (int i = index; i < n - 1; i++)
                {
                    array[i] = array[i + 1];
                }
                n--;
            }
            else
            {
                printf("Invalid index\n");
            }
        }
        break;

        case 3:
        {
            int smallest = array[0];
            for (int i = 1; i < n; i++)
            {
                if (array[i] < smallest)
                {
                    smallest = array[i];
                }
            }
            printf("\nThe smallest number is: %d\n", smallest);   
        }
        break;

        default:
            printf("Invalid Choice\n");
            continue;
        }
        break;
    }

    printf("\nArray after changes: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    zad_5();
    return 0;
}