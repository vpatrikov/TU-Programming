#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define SIZE 3
#define LEN 5

void random_memory_shit() // prints the addresses of the pc's memory?
{
    char ch = 'a';
    char ch2 = 'b';
    char *p = &ch;
    while (1)
    {
        printf("%c", *(++p));
    }
}

void password_check()
{
    char buff[15];
    int pass = 0;

    while (pass <= 0)
    {
        printf("\nEnter password:\n");

        gets(buff);

        if (strcmp(buff, "parola"))
        {
            printf("wrong password.\n");
        }
        else
        {
            printf("Correct password.\n");
            pass = 1;
        }
    }
}

void out_of_range_print()
{
    // ! When the i is out of range of buff, it tries to read random
    // ! (not to the variable allocated) memory
    char array[] = "joror";
    for (size_t i = 0; i < 50; i++)
    {
        printf("%c", array[i]);
    }
}

void dynamic_name_array_and_search() // Segmation fault (core dumped)
{
    char names[SIZE][LEN];
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Enter name %d \n", i);
        fgets(names[i], LEN, stdin);
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%s \n", names[i]);
    }

    printf("Enter search string:\n");
    char search[LEN];
    fgets(search, LEN, stdin);

    for (size_t i = 0; i < SIZE; i++)
    {
        if (strcmp(search, names[i]) == 0)
        {
            printf("Index: %d\n", i);
            break;
        }
    }
}

void enter_student_data()
{
    char names[SIZE][LEN];
    int groups[SIZE];
    char fac_num[SIZE][LEN];
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Enter name %d \n", i);
        fgets(names[i], LEN, stdin);

        printf("Enter group %d \n", i);
        scanf("%d", &groups[i]);
        getchar();

        printf("Enter faculty num %d \n", i);
        fgets(fac_num[i], LEN, stdin);
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%s %d %s", names[i], groups[i], fac_num[i]);
    }
}

int main(void)
{
}