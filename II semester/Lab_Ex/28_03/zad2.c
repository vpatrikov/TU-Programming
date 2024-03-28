#include <stdio.h>

int main()
{
    char str[] = "Hello, world! It is I";
    int count = 0;

    if (str != NULL)
    {
        count = 1;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '!')
            {
                if (str[i + 1] != ' ')
                {
                    count++;
                }
            }
        }
    }

    printf("There are %d words in your sentence.\n", count);

    return 0;
}