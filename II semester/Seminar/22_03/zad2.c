#include <stdio.h>

void input(int *hrs, int *min)
{
    while (1)
    {
        printf("Enter hours: ");
        scanf("%d", hrs);

        if (*hrs > 24 || *hrs < 0)
        {
            printf("Invalid Input\n\n");
        }
        else
        {
            break;
        }
    }
    while (1)
    {
        printf("Enter min: ");
        scanf("%d", min);

        if (*min > 59 || *min < 0)
        {
            printf("Invalid Input\n\n");
        }
        else
        {
            break;
        }
    }
}

void time_after_15_min(int hrs, int min)
{
    if ((min + 15) > 59)
    {
        hrs++;
        if (hrs == 24)
        {
            hrs = 0;
        }
        min = (min + 15) - 60;

        if (min < 10)
        {
            printf("\n%d:0%d\n", hrs, min);
        }
        else
        {
            printf("\n%d:%d\n", hrs, min);
        }
    }
    else
    {
        min += 15;
        printf("\n%d:%d\n", hrs, min);

    }
}

int main()
{
    int hrs, min;
    input(&hrs, &min);
    time_after_15_min(hrs, min);
    return 0;
}
