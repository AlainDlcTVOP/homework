#include <stdio.h>
/* This will reverce the given number */

int main()
{
    int n, a, r = 0;
    printf("enter any no to get its reverse: 3 inputs ");
    scanf("%d", &n);
    while (n >= 1)
    {
        a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
    printf("reverce=%d",r);

    return 0;
}
