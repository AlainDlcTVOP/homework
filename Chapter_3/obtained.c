#include <stdio.h>

/* marks by a class of 50 students examination
count the number of the student belonging to each of the following groups of marks: 0-9,10-19,20-29,----100 */


/* BUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG  */
#define MAXVAL 50
#define COUNTER 11
int main()
{/* BUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG  */
    float value[MAXVAL];
    int i, low, high;
    int group[COUNTER] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (i = 0; i < MAXVAL; i++)
    {
        scanf("%f", &value[i]);
        ++group[(int)(value[i] / 10)];
    }
/* BUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG  */
    printf("/n");
    printf("GROUP RANGE FREQUENCEY");
    for (i = 0; i < COUNTER; i++)
    {
        low = i * 10;
        if (i == 10)
            high = 100;
        else
        {/* BUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG  */
            high = +9;
            printf("%2d%3d to %3d%d", i + 1, low, high, group[i]);
        }
    }
/* BUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG  */
    return 0;
}
