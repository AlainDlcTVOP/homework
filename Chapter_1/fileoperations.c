#include <stdio.h>
#include <conio.h>
/* File Operations: */

int main()
{
    FILE *fp, *fp1;
    char c;
   
    fp = fopen("test.c", "w");
    printf("enter the content for file 1(#.end)\n");
    c = getchar();
    while (c != '#')
    {
        fputc(c, fp);
        c = getchar();
    }
    rewind(fp);
    fp = fopen("test.c", "r");

    fp1 = fopen("tes.c", "w");
    c = fgetc(fp);
    while (c != EOF)
    {
        fputc(c, fp);
        c = fgetc(fp);
    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("tes.c", "r");
    c = fgetc(fp1);
    printf("enter the content for file 2\n");
    while (c != EOF)
    {
        putchar(c);
        c = fgetc(fp1);
    }
    fclose(fp1);
    getch();
    return 0;
}
