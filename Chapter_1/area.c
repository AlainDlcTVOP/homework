#include <stdio.h>

/* program to find area and circumference of circle*/
int main()
{
    int r;
    float pi = 3.14, area, ci;
    puts("Enter radius of circle: ");
    scanf("%d", &r);
    ci = 2 * pi * r;
    printf("circumference=%.3f", ci);

    return 0;
}
