#include <stdio.h>
#include <string.h>

/* illustration of stirng handling functions */

int main()
{
    char s1[20], s2[20], s3[20];
    int x, l1, l2, l3;
    printf("enter 2 strings constants\n");
    printf("?\n");
    scanf("%s%s", s1, s2);
    x = strcmp(s1, s2);
    if (x != 0)
    {
        printf("stings is not equal\n");
        strcat(s1, s2);
    }
    else
        printf("stings is  equal\n");
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);
    printf("s1=%s length =%d characters", s1, l1);
    printf("s2=%s length =%d characters", s2, l2);
    printf("s3=%s length =%d characters", s3, l3);

    return 0;
}
