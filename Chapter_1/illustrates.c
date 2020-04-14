# include <stdio.h>
#include <math.h>


/*Program illustrates the use of continue statement*/
int main()
{
    int count,negatie;
    double number,sqroot;
    printf("enter 9999 to STOP");
    count = 0;
    negatie = 0;
    while (count<= 100)
    {
        printf("enter a number\n");
        scanf("%lf",&number);
        if(number == 9999)
        break;
        if(number<0)
        {
            printf("Number is negative ");
            negatie++;
            continue;
        }
        printf("Number of items done =%d\n", count);
       printf("Number of items done =%d\n", negatie);
          printf("END OF DATA");
        
    }
    

    return 0;
}
