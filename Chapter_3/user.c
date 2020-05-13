#include <stdio.h>

/* show how user-defined function called */

add(a, b);
int main()
{
    int x = 1, y = 2, z;
    z = add(x, y);
    printf("z=%d", z);

    return 0;
}
add(a, b)
{
    return (a + b);
}
