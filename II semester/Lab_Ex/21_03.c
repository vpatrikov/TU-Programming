#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *array_input(int arr[7])
{
    for (int i = 0; i < 7; i++)
    {
        while (1)
        {
            printf("Enter element %d: ", (i + 1));
            scanf("%d", &arr[i]);

            if (arr[i] > -5000 && arr[i] < 50000)
            {
                break;
            }
            else
            {
                printf("Element out of range.\n");
            }
        }
    }
    return arr;
}

void zad_1()
{
    int arr[7];
    array_input(arr);

    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
    }

    printf("\nThe sum of the elements in the array is: %d\n", sum);
}

void zad_2()
{
    int arr[7];
    array_input(arr);

    int largest_num = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > largest_num)
        {
            largest_num = arr[i];
        }
    }

    printf("The largest number is: %d\n", largest_num);
}

void zad_3()
{
    int arr[7];
    array_input(arr);

    double sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
    }

    double avg = sum / 7;
    printf("\nThe average of the array is %.3lf\n", avg);
}

void zad_4()
{
    int arr[7];
    array_input(arr);

    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
    }

    double avg = (double) sum / 7;

    int closest_element_idx = arr[0];
    int min_diff = abs(arr[0] - avg);

    for (int i = 1; i < 7; i++)
    {
        int diff = abs(arr[i] - avg);

        if (diff < min_diff)
        {
            min_diff = diff;
            closest_element_idx = i + 1;
        }
    }

    printf("The average of the array is %.3lf\nThe closest number to %.3lf is at index %d\n", avg, avg, closest_element_idx);
}

int main()
{
    zad_4();
    return 0;
}