#include <stdio.h>

/* function power x raised to the pwer y for integers x and y and returns double-type value */
double power(int x, int y);
int main()
{
    int x, y;
    double power(int, int);
    printf("Enter x and y\n");
    scanf("%d%d", &x, &y);
    printf("%d to power %d is %f", x, y, power(x, y));
    /* code */
    return 0;
}
double power(int x, int y)
{
    double P = 1.0;
    if (y >= 0)
        while (y--)
            P *= x;
    else
        while (y++)
            P /= x;
    return (P);
}