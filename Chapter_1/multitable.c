#include <stdio.h>

void table();
int main()
{
    table();

    return 0;
}
void table()
{
    int n, r, i;
    puts("enter a number to know table: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        r = n * i;
        printf("%d*%d=%d\n", n, i, r);
    }
}