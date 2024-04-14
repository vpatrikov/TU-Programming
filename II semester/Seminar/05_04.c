#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void zad_3()
{
    int n, temp;
    printf("Enter n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void zad_5()
{
    int n, temp;
    printf("Enter n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    printf("The K biggest element is %d", arr[n - k]);
}

void zad_8()
{
    char string[100];

    printf("Enter a value for the string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < sizeof(string); i++)
    {
        if (isupper(string[i]))
        {
            string[i] = tolower(string[i]);
        }
        else if (islower(string[i]))
        {
            string[i] = toupper(string[i]);
        }
    }
    printf("%s", string);
}

void zad_9()
{
    char string[255];
    printf("Enter a sentence: ");
    fgets(string, sizeof(string), stdin);

    int size = sizeof(string);
    for (int i = 0; i < size; i++)
    {
        if (string[i] == ' ')
        {
            for (int j = i; j < size; j++)
            {
                string[j] = string[j + 1];
            }
            size--;
        }
    }

    printf("%s", string);
}

void zad_10()
{
    char string[255];
    char ch;
    printf("Enter a sentence: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the symbol you want to remove: ");
    scanf("%c", &ch);

    int size = sizeof(string);
    for (int i = 0; i < size; i++)
    {
        if (string[i] == ch)
        {
            for (int j = i; j < size; j++)
            {
                string[j] = string[j + 1];
            }
            size--;
        }
    }

    printf("%s", string);
}

int main()
{
    zad_10();
    return 0;
}