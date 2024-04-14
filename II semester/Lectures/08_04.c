#include <stdio.h>

int main()
{
    int num;

    FILE *fptr;
    fptr = fopen("bruh.txt", "a+");

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fptr, "\n%d\n", num);
    fscanf(fptr, "\n%d\n", &num);
}