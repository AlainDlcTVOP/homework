#include <stdio.h>
#include <stdlib.h>

/* sorting element of an array in descending order*/

int main()
{
    int *arr, temp, i, j, n;

    puts("Enter the number of element in the array");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("Elements of array in descending order are\n");
        for (i = 0; i < n; i++)
        {
            printf("%d", i);
        }

        return 0;
    }
}