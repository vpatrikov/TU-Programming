#include <stdio.h>

void swap_numbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter 'a' and 'b': ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d; b = %d;\n", a, b);
    swap_numbers(&a, &b);
    printf("\nAfter swap: a = %d; b = %d;\n", a, b);

    return 0;
}
