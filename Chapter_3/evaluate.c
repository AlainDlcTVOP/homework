#include <stdio.h>

/* A program to evalute the equation y=xn when non-negative integer */
int main()
{
    int count, n;
    float x, y;
    printf("Enter the values of x and n: \n");
    scanf("%f%d", &x, &n);
    y = 1.0;
    count = 1;
    while (count <= n)
    {
        y = y * x;
        count++;
    }
    printf("x=%f n=%d x to power n=%f", x, n, y);

    return 0;
}
