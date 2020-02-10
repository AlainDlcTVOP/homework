#include <stdio.h>

/* find factorial of number using function */

int fact(int x);
int main()
{
    int a, f;
    puts("Enter a number");
    scanf("%d", &a);

    f = fact(a);

    printf("factorial=%d", f);

    return 0;
}
int fact(int x)
{
    int fac = 1, i;
    for (i = x; i >= 1; i--)
        fac = fac * i;
    return (fac);
}
