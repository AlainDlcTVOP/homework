#include <stdio.h>

/* display a matrix */

int main()
{
    int a[3][2], b[3][2], i, j;

    puts("enter value for matrix:");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }

    printf("print the value for matrix b \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    }

    printf("\n a matrix is \n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
        }
         printf("\n");
    }
   

    printf("\n b matrix is \n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", b[i][j]);
        }
         printf("\n");
    }
   

    return 0;
}
