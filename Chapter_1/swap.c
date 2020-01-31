#include <stdio.h>

/* Swap of two no's without using third variable*/

int main()
{
    int a, b;
    puts("Enter value for a & b");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping the value of a & b %d %d",a,b);
    return 0;
}
