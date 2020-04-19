#include <stdio.h>

/* single -subscribed variable to evaluate expression Total = 10 E i = 1 X2 /X2*/

int main(int argc, char const *argv[])
{
    int i;
    float x[10], value, total;
    printf("ENTER 10 REAL NUMBERS\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &value);
        x[i] = value;
    }
    total = 0.0;
    for (i = 0; i < 10; i++)

        total = total + x[i] * x[i];
    printf("\n");
    for (int i = 0; i < 10; i++)
    
        printf("x[%2d]=%5.2f\n", i+1,x[i]);
        printf("total=%2.f\n",total);
    
    

    return 0;
}
