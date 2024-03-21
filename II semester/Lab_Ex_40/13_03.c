#include <stdio.h>

double square_area(int a)
{
    return a * a;
}

double rectangle_area(int a, int b)
{
    return a * b;
}

double triangle_area(int b, int h)
{
    return 0.5 * b * h;
}

double circle_area(int r)
{
    return 3.14*r*r;
}

int main(void)
{
    int choice;
    double s;

    printf("Choose a figure\n\n1 - Square\n2 - Rectangle\n3 - Triangle\n4 - Circle\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        int a;
        printf("Enter a: ");
        scanf("%d", &a);
        s = square_area(a);
        printf("The area of the square is: %.2lf\n", s);
        break;
    }
    case 2:
    {
        int a, b;
        printf("\nEnter a: ");
        scanf("%d", &a);
        printf("Enter b: ");
        scanf("%d", &b);
        s = rectangle_area(a, b);
        printf("The area of the triangle is: %.2lf\n", s);
        break;
    }
    case 3:
    {
        int b, h;
        printf("\nEnter b: ");
        scanf("%d", &b);
        printf("Enter h: ");
        scanf("%d", &h);
        s = triangle_area(b, h);
        printf("The area of the triangle is: %.2lf\n", s);
        break;
    }
    case 4:
    {
        double pi = 3.14;
        int r;
        printf("\nEnter r: ");
        scanf("%d", &r);
        s = circle_area(r);
        printf("The area of the circle is: %.2lf\n", s);
        break;
    }
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
