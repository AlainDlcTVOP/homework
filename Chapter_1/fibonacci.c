#include <stdio.h>
#include <stdint.h>

/* print Fibonacci series up to 100 */

int main()
{
    uint8_t a = 1, b = 1, c = 0, i;
    printf("%d\t%d\t", a, b);
    for (i = 0; i <= 10; i++)
    {
        c = a + b;
        if(c < 100) {
            printf("%d\t",c);
        }
        a = b;
        b = c;
    }

    return 0;
}
