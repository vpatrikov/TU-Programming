#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *array=(int*)malloc(sizeof(int));
    
    printf("%d", *array);

}