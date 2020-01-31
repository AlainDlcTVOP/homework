#include <stdio.h>

/* Calculate sum of 5 subjects and find percentage*/
int main()
{

    int s1, s2, s3, s4, s5, sum, total = 500;
    float per;
    printf("Enter marks of 5 subjects\n");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    printf("sum=%d\n", sum);
    per = (sum * 100) / total;
    printf("percentage=%f \n", per);

    return 0;
}
