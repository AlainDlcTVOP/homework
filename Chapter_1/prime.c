#include <stdio.h>
#include <stdint.h>

/* Find whether given no, is prime or not */

int main()
{
    int8_t i, n, r = 0;
    printf("Enter any no: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
            r = 1;
        break;
    }
    if (r == 0)
        printf("prime no");
    else

        printf("not prime");

    return 0;
}
