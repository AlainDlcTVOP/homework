#include <stdio.h>

/* read a series of words from a terminal using scanf function */
int main()
{
    char word1[40], word2[40], word3[40], word4[40];
    printf("Enter a text\n");
    scanf("%s%s", word1, word2);
    scanf("%s", word3);
    scanf("%s", word4);
    printf("\n");
    printf("word1=%s\n word2=%s\n", word1, word2);
    printf("word3=%s\n word4=%s\n", word3, word4);

    return 0;
}
