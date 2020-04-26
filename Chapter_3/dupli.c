#include <stdio.h>
#include <stdlib.h>

/* removing duplicate element in an array */

int main(int argc, char const *argv[])
{
    int *arr, i, j, n, x, temp;
    printf("Enter the number of element in the array \n");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a number\n");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("Elements of array after sorting\n");
        for (i = 0; i < n; i++)
            printf("%d", arr[i]);
        i = 0;
        j = 1;

        while (i < n)
        {
            if (arr[i] == arr[j])
        }
        for (x = j; x < n - 1; x++)
            arr[x] = arr[x + 1];
        n - ;
    
    else
    
        i++;
        j++;
    
    printf("Elements of array after removing duplicate elements");
    for (i = 0; i < n; i++)
        printf("%d", arr[i]);
    return 0;
}
}