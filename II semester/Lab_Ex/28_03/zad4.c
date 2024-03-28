#include <stdio.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "hello";

    int i = 0;

    while(str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    if (str1[i] > str2[i])
    {
        printf(">0\n");
    }
    else if (str1[i] < str2[i])
    {
        printf("<0\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}