#include <stdio.h>
#include <conio.h>
#define LOOP 100
#define ACCURACY 0.0001
/* A program to evaluate the series 1/1-x= 1+x+x^2+x^3 
PLEASE DONT USE THE GOTO METHOD */
int main()
{
    int n;
    float x, term, sum;
    printf("Input value of x:\n");
    scanf("%f", &x);
    sum = 0;

    for (term = 1, n = 1; n <= LOOP; ++n)
    {
        sum += term;
        if(term<=ACCURACY)
        goto output;
        term *=x;
    }
    printf("FINAL VALUE OF N IS NOT SUFFICIENT TO ACHIEVE DESIRED ACCURACY");
    goto end;
    output:
    printf("EXIT FROM LOOP");
    printf("sum=%f no of terms=%d", sum,n);
    end:
    ;

    return 0;
}
