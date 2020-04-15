#include <stdio.h>

/* Program to print binomail coefficent table */

#define MAX 10
int main()
{
    int m, x, binom;

    printf("mx\n");
    for (m = 0; m <= 10; ++m)
        printf("---------------");
    m = 0;

    do
    {
        printf("%2d", m);
        x = 0;
        binom = 1;

     while (x <= 10)
    {
        if(m == 0 || x ==0)
        printf("%4d",binom);
        else
        {
           binom=binom*(m-x+1)/x;
           printf("%4d",binom);
        }
        x=x+1;
        
    }
    printf("\n");
    m=m+1;
    }
    
    while (m<=MAX);
       printf("---------------");
    
    
    return 0;
}
