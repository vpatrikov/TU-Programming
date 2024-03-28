#include <stdio.h>

int main() {
    int n;
    int num, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    printf("Enter amount of numbers you want to enter: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num < 200)
            p1++;
        else if (num >= 200 && num <= 399)
            p2++;
        else if (num >= 400 && num <= 599)
            p3++;
        else if (num >= 600 && num <= 799)
            p4++;
        else
            p5++;
    }

    double percent_p1 = (double)p1 / n * 100;
    double percent_p2 = (double)p2 / n * 100;
    double percent_p3 = (double)p3 / n * 100;
    double percent_p4 = (double)p4 / n * 100;
    double percent_p5 = (double)p5 / n * 100;

    printf("p1: %.2f%%\n", percent_p1);
    printf("p2: %.2f%%\n", percent_p2);
    printf("p3: %.2f%%\n", percent_p3);
    printf("p4: %.2f%%\n", percent_p4);
    printf("p5: %.2f%%\n", percent_p5);

    return 0;
}
