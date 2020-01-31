#include <stdio.h>

/*Find the simplest interest*/
void main()
{
    int p, r, t, si;
    puts("enter principle, Rate of intrest & time to find simple interest");
    scanf("%d%d%d", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("simple intrest= %d", si);
}