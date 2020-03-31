#include <stdio.h>
#include <stdint.h>

/*A class of n student take an annual examinations in m subjects. Aprogram to read the marks
obtained by eash student in various subject ant to compute
and prit total marks obtained by each of them*/

#define FIRST 360
#define SECOND 240

int main()
{
    uint64_t n, m, i, j, rool_number, marks, total;
    printf("Enter number of students and subjects\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
    {
        printf("Enter roll number\n");
        scanf("%d",&rool_number);
        total = 0;
        printf("Enter marks of %d subjects for ROLL NO\n",m,rool_number);
        for(j=1;j<=m;j++)
        {
            scanf("%d", &marks);
            total=total+marks;

        }
        printf("TOTAL MARKS =%d\n",total);
        if(total>=FIRST)
        printf("(FIRST division)\n");
        else if (total >= SECOND)
          printf("(SECOND division)\n");
    else
    printf("**(FIAL)**");
    
    
    }

    return 0;
}
