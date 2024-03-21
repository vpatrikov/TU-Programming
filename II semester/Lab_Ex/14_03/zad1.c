#include <stdio.h>

double square_area(double *a)
{
    return (*a) * (*a);
}

double rectangle_area(double *a, double *b)
{
    return (*a) * (*b);
}

double triangle_area(double *b, double *h)
{
    return 0.5 * ((*b) * (*h));
}

double circle_area(double *r)
{
    return 3.14 * (*r) * (*r);
}

int main()
{
    int choice;
    double a, b, s;

    printf("Choose a figure\n\n1 - Square\n2 - Rectangle\n3 - Triangle\n4 - Circle\n");

    if (scanf("%d", &choice) != 1)
    {
        printf("\nInvalid Input.\n");
    }
    else
    {
        switch (choice)
        {
        case 1:
            printf("\nEnter a: ");
            scanf("%lf", &a);
            s = square_area(&a);
            printf("\nThe area of the square is: %.2lf\n", s);
            break;

        case 2:
            printf("\nEnter 'a' and 'b': ");
            scanf("%lf %lf", &a, &b);
            s = rectangle_area(&a, &b);
            printf("\nThe area of the rectangle is: %.2lf\n", s);
            break;

        case 3:
            printf("\nEnter 'b' and 'h': ");
            scanf("%lf %lf", &b, &a);
            s = triangle_area(&b, &a);
            printf("\nThe area of the triangle is: %.2lf\n", s);
            break;

        case 4:
            printf("\nEnter r: ");
            scanf("%lf", &a);
            s = circle_area(&a);
            printf("\nThe area of the circle is: %.2lf\n", s);
            break;

        default:
            printf("\nInvalid Choice.\n\n");
            break;
        }
    }

    return 0;
}
