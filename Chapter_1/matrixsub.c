#include <stdio.h>

/* fin sum of two matrix */

int main()
{
    int a[3][2], b[3][2], c[3][2], i, j;

    puts("Enter value for a matrix");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)

            scanf("%d", &a[i][j]);
    }

    puts("Enter value for b matrix");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)

            scanf("%d", &b[i][j]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)

            c[i][j] = a[i][j] * b[i][j];
    }

    printf("Multi of matrix is\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
