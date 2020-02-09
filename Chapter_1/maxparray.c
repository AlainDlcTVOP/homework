#include <stdio.h>

/* maximun number in array using pointer */

int main()
{
    int max, i, *a[5];
    printf("Enter element for the array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &*a[i]);
    max = *a[0];
    for (i = 1; i < 5; i++)
    {
        if (max < *a[i])
            max = *a[i];
    }
    printf("maximun number =%d", max);

    return 0;
}
