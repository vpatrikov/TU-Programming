#include <stdio.h>

void simple_number_comparison()
{
    int a, b;
    printf("Enter a value for a\n");
    scanf("%d", &a);
    printf("Enter a value for b\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a=%d; b=%d and a>b", a, b);
    }
    else if (a < b)
    {
        printf("a=%d; b=%d and b>a", a, b);
    }
    else
    {
        printf("a=%d; b=%d and b=a", a, b);
    }
}

void switch_test_becuz_why_not()
{
    printf("\nEnter c: \n");
    int c;
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("You entered one so case 1 is activated");
        break;
    case 2:
        printf("You entered one so case 1 is activated");
        break;
    default:
        printf("Case is not covered");
        break;
    }
}

int main(void)
{
    int size;
    printf("Enter the size of your array:\n");
    scanf("%d", &size);
    
    int array[99]; 
    for (int i = 0; i < size; i++)
    {
        printf("Element %d of the array\n", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    
    
}