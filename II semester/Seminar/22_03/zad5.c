#include <stdio.h>

int main()
{
    int input;
    int sum_sec = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &input);
        sum_sec += input;
    }

    int min = sum_sec / 60;

    if (min <= 0)
    {
        if (sum_sec < 10)
        {
            printf("0:0%d\n", sum_sec);
        }
        else
        {
        printf("0:%d\n", sum_sec);

        }
    }
    else
    {
        sum_sec %= 60;
        if (sum_sec < 10)
        {
            printf("0%d:%d\n", min, sum_sec);
        }
        else
        {
            printf("%d:%d\n", min, sum_sec);
        }
    }
    return 0;
}