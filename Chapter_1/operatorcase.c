#include <stdio.h>

/* display arithmetic operator using switch case */

int main()
{
    int a, b, n, s, m, su, d;
    printf("enter two no's: \n");
    scanf("%d%d", &a, &b);
    printf("enter 1 for sum\n2 for multiply\n3 for substraction\n4 for division ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        s = a + b;
        printf("sum = %d", s);
        break;

    case 2:
        m = a * b;
        printf("multy = %d", m);
        break;
    case 3:
        su = a - b;
        printf("sub = %d", su);
        break;

    case 4:
        d = a / b;
        printf("div = %d", d);

        break;

    default:

        printf("Wrong input");
        break;
    }
    return 0;
}
