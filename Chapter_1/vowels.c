#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Number Of occurrences Of Wovels, Consonants, Words, Spaces And
Special Characters In the Given Statement */

int main()
{

    char s[100];
    int vow = 0, cons = 0, spc = 0, punc = 0, l, i;
    printf("Enter the statement\n");
    gets(s);
    l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {

                vow++;
            }
            else
            {
                cons++;
            }
        }
        if (ispunct(s[i]))
        {
            punc++;
        }

        printf("\nno.of words=%d", spc + l);
        printf("\nno.of vowels=%d", vow);
        printf("\nno.of consonants=%d", cons);
        printf("\nno.of space=%d", spc);
        printf("\nno.of special characters=%d", punc);
    }

    return 0;
}
