#include <stdio.h>

/* Swap with function */

void swap(int a, int b);

int main(int argc, char const *argv[])
{

    int a, b;

    puts("Enter value for a and b ");
    scanf("%d%d", &a, &b);
    swap(a, b);

    printf(" the swap value is: %d%d\n");

    return 0;
}
void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping value for a and b is %d %d", a, b);
}
