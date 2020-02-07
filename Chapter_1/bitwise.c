#include <stdio.h>


/* Bitwise AND op between two integers */

int main()
{
    int a, b, c;

    printf("Read the integers from keyboard:\n");
    scanf("%d%d", &a, &b);
    c = a & b;
    printf("The Answer after AND is %d",c);

    return 0;
}
