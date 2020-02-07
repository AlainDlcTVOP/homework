#include <stdio.h>

/* 10 elements of array = average */
int main(int argc, char const *argv[])
{
    int a[10], i, sum = 0;
    float av;
    printf("enter the element of an array\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
    sum = sum +a[i];
        printf("sum=%d", sum);
    av = sum / 10;
    printf("avarage=%.2f", av);

    return 0;
}
