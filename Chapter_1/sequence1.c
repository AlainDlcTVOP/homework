#include <stdio.h>
#include <stdint.h>

/* print star sequence1 */

int main()
{
    uint8_t i, j;

    for (i = 1; i <= 50; i++) // loop for star

    {
        for (j = 0; j < i; j++)

            printf("*");
        printf("\n");
    }

    return 0;
}
