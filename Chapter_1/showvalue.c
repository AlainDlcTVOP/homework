#include <stdio.h>

/* Call by value */
void swap(int a, int b);
int main()
{

    int a, b;
    a = 5;
    b = 7;
    printf("Before Swap %d %d before swap\n", a, b);

    swap(a, b);

    printf("After swap %d %d", a,b);
  


    
    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
