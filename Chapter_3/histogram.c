#include <stdio.h>

/* Program to draw a histogram */

#define N 5
int main()
{
    int value[N];

    int i, j, n, x;

    for (n = 0; n < N; ++n)
    {
        printf("Enter employess in group-%d:", n + 1);
        scanf("%d", &x);
        value[n] = x;
        printf("%d", value[n]);
    }
    printf("\n");
    printf("|\n");
    for (n = 0; n < N; ++n)
    {
        for (i = 1; i <= 3; i++)
        {
            if (1 == 2)
                printf("Group-%d|", n + 1);
            else

                printf("|");
            for (j = 1; j <= value[n]; ++j)
                printf("*");
            if (i == 2)
                printf("(%d)", value[n]);
            else
                printf("\n");
        }
    }
    printf("\n");

    return 0;
}
