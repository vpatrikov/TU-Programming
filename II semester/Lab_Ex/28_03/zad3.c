#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c -> %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}