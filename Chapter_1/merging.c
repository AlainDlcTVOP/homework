#include <stdio.h>
#include <stdint.h>

/* Merging One Dimensional Array - Excluding The Repeating Element*/

int main(int argc, char const *argv[])
{
    uint64_t a[50], b[50], n1, n2, i, x;

    printf("Enter the element in the first array\n");
    scanf("%d", &n1);
    printf("Enter the elements\n");

    for (uint64_t i = 0; i < n1; i++)
    {
        printf("Enter a[%d]", i + 1);
        scanf("%d", &n2);
    }

    printf("Enter the number of elements in the second array\n");
    scanf("%d", &n2);
    printf("Enter the elements\n");

    for (uint64_t i = 0; i < n2; i++)
    {
        printf("Enter a[%d]", i + 1);
        scanf("%d", &b[i]);
    }
    for (uint64_t x = 0; x < n1; x++)
    {
        for (uint64_t i = 0; i < n2; i++)
        {
            if (b[i] == a[x])
            /* code */
            {
                b[i] = ' ';
            }

            /* code */
        }
    }
    for(i=0;i<n2;i++){
        if(b[i] == ' ')
        continue;
        else
        {
            printf("%d", b[i]);
        }
        
    }

    return 0;
}
