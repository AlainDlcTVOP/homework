#include <stdio.h>

/* find factorial of number using recursion */

int fact(int x);
int main()
{

    int n;

    puts("enter number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Its invalid number \n");
    else
        printf("%d!=%d", n, fact(n));

    return 0;
}

int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return (x * fact(x - 1));
}
