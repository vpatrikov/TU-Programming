#include <stdio.h>

char* odd_or_even(int a)
{
    if (a % 2 == 0)
    {
        return "Number is even.\n";
    }
    else
    {
        return "Number is odd.\n";
    }
    
}

int main()
{
    int a = 8;
    printf("%s", odd_or_even(a));
    return 0;
}