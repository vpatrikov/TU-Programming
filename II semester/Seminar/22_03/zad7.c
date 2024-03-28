#include <stdio.h>

double cheapest_travel(int n, char time_of_day)
{
    double taxi = 0.70;
    double bus = 0.09 * n;
    double train = 0.06 * n;

    if (time_of_day == 'D')
    {
        taxi += n * 0.79;
    }
    else
    {
        taxi += n * 0.9;
    }

    if (n < 20)
    {
        return taxi;
    }
    else if (n >= 20 && n < 100)
    {
        if (train < taxi)
        {
            return train;
        }
        else
        {
            return taxi;
        }
    }
    else
    {
        if (taxi < bus)
        {
            if (bus < train)
            {
                return bus;
            }
            else
            {
                if (taxi < train)
                {
                    return taxi;
                }
                else
                {
                    return train;
                }
            }
        }
        else
        {
            if (bus < train)
            {
                return bus;
            }
            else
            {
                return train;
            }
        }
    }
}

int main()
{
    int n;
    char time_of_day;

    printf("Enter amount of km the student has to travel: ");
    scanf("%d", &n);

    while (1)
    {
        printf("Enter time of day (D or N): ");
        scanf("%c", &time_of_day);

        if (time_of_day == 'D' || time_of_day == 'N')
        {
            break;
        }
        else
        {
            printf("Invalid Input\n\n");
        }
    }

    printf("The price of the cheapest transport is: %.2lf lv", cheapest_travel(n, time_of_day));

    return 0;
}