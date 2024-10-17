#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int m = 7;
    int a[10] = {3,6,6,2,4,5,6,3,5,4};
    int b[7] = {0};

    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b[i]; j++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
