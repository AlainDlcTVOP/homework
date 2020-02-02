#include <stdio.h>

/* find the greates in 3 numbers */
int main()
{
    int a, b, c;

    printf("Enter value of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b) && (a > c))
        printf(" %d = a is greatest");
    if ((b > c) && (b > a))
        printf(" %d = b is greatest");
    if ((c > a) && (c > b))
        printf(" %d = c is greatest");
    return 0;
}
