#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nBefore conversion: %s", str);

    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("After conversion: %s\n", str);

    return 0;
}
