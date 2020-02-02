#include <stdio.h>

/* show the use oc conditional operator */

int main()

{
    int a, b;
    printf("enter value for a and b: \n");
    scanf("%d%d", &a, &b);

    (a>b)?printf(" a %d is greater"):printf("b %d is greater");

     return 0;
}
