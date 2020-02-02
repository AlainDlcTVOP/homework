# include <stdio.h>

/* shift input data */

int main()
{
    int x,y;
    printf("Read the integer from keyboard: \n");
    scanf("%d", &x);
    x <<=3;
    y = x;
    printf("The left shofted data is = %d ", y);
    return 0;
}
