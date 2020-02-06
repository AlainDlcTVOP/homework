#include <stdio.h>
#include <stdint.h>

/* print star sequence2 */
int main()
{
    uint8_t i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5;  j >= i; j--)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
