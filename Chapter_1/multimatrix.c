#include <stdio.h>

/*Find multiplication of two arrays*/

int main()
{
   int a[3][2], b[3][2], c[3][2], i, j;

   printf("Enter value for a matrix \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < j; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf("Enter value for b matrix \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < j; j++)
        {
            scanf("%d", &b[i][j]);
        }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < j; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }

    printf("The matrix is\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < j; j++)
        {
           printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
