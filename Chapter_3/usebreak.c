#include <stdio.h>

/* The program illustrates the use of the break statement in a C program */

int main()
{
    int m;
    float x, sum, average;
    puts("This program computes the average of a set of computers");
    printf("Enter a values one after another\n");
    printf("Enter a NEGATIVE number at the end!!!\n");
    sum = 0;
    for(m=1;m<=1000;++m){
        scanf("%f",&x);
        if(x<0)
        break;
        sum+=x;
    }
    average=sum/(float)(m-1);
    printf("sum=%f \n", sum);
    printf("Average=%f \n", average);
    return 0;
}

