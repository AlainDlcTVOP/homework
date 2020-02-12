#include <stdio.h>

/* show call by rference */
int swap(int *x, int *y);
int main()
{
    int a, b, *aa, *bb, swap();
    a = 5;
    b = 10;
    aa = &a;
    bb = &b;
    printf("value of a=%d & value of=%d before swap\n", a, b);
    swap(aa, bb);
    printf("value of a=%d & value of=%d after swap\n", a, b);
    return 0;
}
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
