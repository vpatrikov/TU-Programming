#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point Point;

struct Point
{
    float x, y;
};

int main()
{
    Point points[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nPoint #%d:\n\n", (i + 1));
        printf("Enter x: ");
        scanf("%f", &points[i].x);
        printf("Enter y: ");
        scanf("%f", &points[i].y);
    }

    double a = sqrt(pow(points[2].x - points[0].x, 2) + pow(points[2].y - points[0].y, 2));
    double b = sqrt(pow(points[2].x - points[1].x, 2) + pow(points[2].y - points[1].y, 2));
    double c = sqrt(pow(points[0].x - points[1].x, 2) + pow(points[0].y - points[1].y, 2));

    if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
        printf("\nTriangle exists\n");
    }
    else
    {
        printf("\nTriangle does not exist\n");
    }

    return 0;
}