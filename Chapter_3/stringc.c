#include <stdio.h>

/* concatenation of strings */

int main()
{
    int i, j, k;
    char first_name[10] = {"Ida"};
    char secound_name[10] = {"Linnea"};
    char last_name[10] = {"Hagman"};
    char name[30];
    for (i = 0; first_name[i] != '\0'; i++)
        name[i] = first_name[i];
    name[i] = ' ';

    for (j = 0; secound_name[j] != '\0'; j++)
        name[i + j + 1] = secound_name[j];
    name[i + j + 1] = ' ';

    for (k = 0; last_name[k] != '\0'; k++)
        name[i + j + k + 2] = last_name[k];
    name[i + j + k + 2] = ' ';
    printf("\n\n");
    printf("%s\n", name);
    return 0;
}
