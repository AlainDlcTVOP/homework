#include <stdio.h>
#include <stdint.h>

/* print stars sequence3*/

int main()
{
    uint8_t i, j, k;

    for (i = 1; i <= 3; i++)
    {
        for (j = 3; j >= i; j--)
            printf(" ");
    {
    for (k = 1; k <= i * 2; k++)
    
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
