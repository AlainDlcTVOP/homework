#include <stdio.h>
/* Find maximum num in arrray */

int main()
{
    int a[5], max, i;
    puts("Enter element for the array:");
    for (i = 0; i < 5; i++)

        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < 5; i++)
    {
        if (max < 5)
            max = a[i];
    }
    printf("max num=%d", max);

    return 0;
}
