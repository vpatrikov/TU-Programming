#include <stdio.h>

int vowels_count(char* str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        default:
            break;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Number of vowels: %d\n", vowels_count(str));
    return 0;
}
