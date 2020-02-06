#include <stdio.h>
#include <stdint.h>
/* Display 50 natural nu % their sum*/

int main()
{
    uint8_t i, sum = 0;

    for (i = 1; i <= 50; i++)
    {
        printf("%d num is= %d\n", i, i);
        sum = sum + i;
    }
    printf("sum = %d", sum);

    return 0;
}
