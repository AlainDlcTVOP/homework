#include <stdio.h>
/* Find transpose of a matrix */

int main()
{
    int a[3][2], b[3][2], i, j;

    printf("Enter value for matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            b[i][j] = a[i][j];
    }
    printf("Tranpose matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d", b[i][j]);
        printf("\n");
    }

    return 0;
}
