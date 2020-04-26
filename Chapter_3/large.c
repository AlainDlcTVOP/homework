#include <stdio.h>
#include <stdlib.h>

/* finding the largest number in an array */

int main()
{
    int *arr, i, j ,n, LARGE;
    puts("Enter the number of element in the array");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        printf("%d", &arr[i]);
    }
    LARGE= arr[0];
    for(i = 1; i<n;i++) {
        if (arr[i] > LARGE)
            LARGE = arr[i];
    }
    printf("The largest number in the array is %d", LARGE);
    return 0;
}
