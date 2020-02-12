#include <stdio.h>

/* Find largest nummer of two using function */

void max();
int main()
{

    max();
    return 0;
}
void max()
{
    int a[5], max, i, n;
    puts("How many nums you want to enter? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < 5; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("maximun number =%d", max);
}