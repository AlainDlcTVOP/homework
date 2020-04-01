#include <stdio.h>
#include <math.h>
/* Program illustrate the use of continue statement */

int main()
{
    int count, negative;
    double number, sqroot;
    puts("enter 9999 to STOP!!");
    count = 0;
    negative = 0;
    while (count <= 100)
    {
        printf("Enter a number\n");
        scanf("%lf", &number);
        if (number == 9999)
            break;
        if (number < 0)
        {
            printf("The number is negative\n");
            negative++;
            continue;
        }
        sqroot = sqrt(number);
        printf("Number=%lf square root=%1f\n", number, sqroot);
        count++;
    }
    printf("Number of items done= %d\n", count);
    printf("Negative items= %d\n", negative);
    puts("END OF DATA");

    return 0;
}
