#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n_entered = 0;

void get_input(int *n, double arr[][*n])
{
    if (n_entered == 0)
    {
        printf("Enter n: ");
        scanf("%d", n);
        n_entered++;
    }

    if (arr != NULL)
    {
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < *n; i++)
        {
            for (int j = 0; j < *n; j++)
            {
                scanf("%lf", &arr[i][j]);
            }
        }
    }
}

void print_diag_elem(int n, double arr[n][n], char choice[])
{
    if (strcmp(choice, "main") == 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%.2lf ", arr[i][i]);
        }
    }
    else if (strcmp(choice, "other") == 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%.2lf ", arr[i][n - i - 1]);
        }
    }
    else if (strcmp(choice, "elements above") == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                printf("%.2lf ", arr[i][j]);
            }
        }
    }
    else if (strcmp(choice, "elements below") == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%.2lf ", arr[i][j]);
            }
        }
    }
    else
    {
        printf("ERROR: Invalid value for 'choice' in print_diag_elem function.");
    }
}

void zad_1()
{
    int n;
    get_input(&n, NULL);
    
    double arr[n][n];
    get_input(&n, arr);

    printf("Main Diagonal: ");
    print_diag_elem(n, arr, "main");

    printf("\nOther Diagonal: ");
    print_diag_elem(n, arr, "other");

    printf("\nElements above main diagonal: ");
    print_diag_elem(n, arr, "elements above");

    printf("\nElements below other diagonal: ");
    print_diag_elem(n, arr, "elements below");
}

int zad_2()
{
    int n;
    get_input(&n, NULL);

    double arr[n][n];
    get_input(&n, arr);

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[0][i];
    }

    for (int i = 0; i < n; i++)
    {
        double row_sum = 0, col_sum = 0;
        for (int j = 0; j < n; j++)
        {
            row_sum += arr[i][j];
            col_sum += arr[j][i];
        }

        if (row_sum != sum || col_sum != sum)
        {
            printf("The square is not magic\n");
            return 0;
        }
    }

    double diag1_sum = 0, diag2_sum = 0;
    for (int i = 0; i < n; i++)
    {
        diag1_sum += arr[i][i];
    }

    for (int i = 0; i < n; i++)
    {
        diag2_sum += arr[i][n - i - 1];
    }

    if (diag1_sum != sum || diag2_sum != sum)
    {
        printf("The square is not magic\n");
        return 0;
    }

    printf("The square is magic\n");
}

int main()
{
    zad_1();
    return 0;
}