#include <stdio.h>

int is_inside_rectangle(float x1, float y1, float x2, float y2, float x, float y)
{
    return (x >= x1 && x <= x2 && y >= y1 && y <= y2);
}

int main()
{
    float x1, y1, x2, y2, x, y;

    printf("Enter x1 and x2: ");
    scanf("%f %f", &x1, &x2);
    printf("Enter y1 and y2: ");
    scanf("%f %f", &y1, &y2);
    printf("Enter x and y of the point: ");
    scanf("%f %f", &x, &y);

    if (is_inside_rectangle(x1, y1, x2, y2, x, y))
    {
        printf("Inside\n");
    }
    else
    {
        printf("Outside\n");
    }

    return 0;
}
