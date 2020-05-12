#include <stdio.h>

/* functions no arguments and no return values */

void printline(void);
void value(void);
int main()
{
    value();
    printline();

    return 0;
}
void printline(void)
{
    int i;
    for (i = 1; i <= 35; i++)
        printf("%c", '-');
    printf("\n");
}
void value(void)
{
    int year, period;
    float inrate, sum, principal;
    scanf("%f", &principal);
    printf("interest rate?\n");
    scanf("%f", &inrate);
    printf("period\n");
    scanf("%f", &period);
    sum = principal;
    year = 1;
    while (year <= period)
    {
        sum = sum * (1 + inrate);
        year = year + 1;
        /* code */
    }
    printf("\n%8.2f %5.2f %5df %12.2f\n", principal, inrate, period, sum);
}