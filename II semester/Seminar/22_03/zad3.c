#include <stdio.h>

int is_equal(int a, int b, int c)
{
    return (a == b == c);
}

int main ()
{
    int a, b, c;
    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (is_equal(a, b, c))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}