#include <stdio.h>

/* Program uses a for loop to print the power of 2 table for th power 0 to 20
both positive and negative*/

int main()
{
    long int p;
    int n;
    double q;
    printf("--------------------------------------------------\n");
    printf("2 power n   n   2 to power -n\n");
    printf("--------------------------------------------------\n");
    p = 1;
    for (n = 0; n < 21; n++)
    {
        if (n == 0)
            p = 1;
        else
        
            p = p * 2;
            q = 1.0 / (double)p;
            printf("10ld 10%d %20.12lf", p, n, q);
        }
        printf("--------------------------------------------------\n");
    

    return 0;
}
