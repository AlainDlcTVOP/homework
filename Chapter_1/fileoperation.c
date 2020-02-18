#include <stdio.h>

/* 47 File operations*/

int main()
{
    FILE *fp, *fp1;

    char c;
    fp = fopen("test.c", "w");
    printf("\nenter the contents for file1(#.end)\n");
    c = getchar();

    while (c != '#')
    {
        fputc(c, fp);
        c = getchar();
    }
    rewind(fp);
    fp = fopen("test.c", "r");

    fp1 = fopen("tes.c", "w");
    printf("\nenter the contents for file2(#.end)\n");
    c = getchar();

    while (c != '#')
    {
        fputc(c, fp1);
        c = getchar();
    }

    fclose(fp);
    fclose(fp1);

    return 0;
}
