#include <stdio.h>

int str_len(char* str)
{
    int length = 0;

    while(str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main ()
{
    char str[255];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("\nThe size of the string is %d\n", str_len(str));
}