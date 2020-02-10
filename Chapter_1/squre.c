#include <stdio.h>

/* find squre of a number using function */
int squere(int x);
int main()
{
    int r, a;
    printf("Enter any number:\n");
    scanf("%d", &a);
    r = squere(a);

    printf("squere is: %d", r);

    return 0;
}
int squere(int x)
{

    return (x * x);
}