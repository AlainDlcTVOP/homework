#include <stdio.h>
#include <stdlib.h>

/* finding the desired kth smallest element in an array */

int main()
{
    int *arr, i, j, n, temp, k;

    printf("Enter the numbers of elements in the array \n");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a number\n");
        scanf("%d", &arr[i]);
    }
    for (j = i + 1; j < n; j++)
    {
        if (arr[i] < arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    printf("Elements of array after sorting\n");
    for (i = 0; i < n; i++)
        ;
    printf("%d", arr[i]);
    printf("Which smallest element do you want to determine\n");
    scanf("%d", k);
    if(k<=n)
    printf("Desired smallest element is %d\n", arr[k-1]);
    else
    printf("Please enter a valid value for finding the particular smallest element\n");
    
    return 0;
}
