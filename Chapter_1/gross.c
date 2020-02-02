# include <stdio.h>

/* find gross salery */
int main()
{
        int gs,bs,da,ta;

        printf("Enter basic salary: \n");
        scanf("%d", &bs);
        da = (10*bs)/100;
        ta = (12*bs)/100;
        gs = bs+da+ta;
        printf("gross salary = %d", gs);
    return 0;
}
