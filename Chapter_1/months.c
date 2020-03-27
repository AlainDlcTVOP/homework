#include <stdio.h>

/* Write a program to create enum data type for
 12 months, Display their values in integer constans*/

int main()
{
    enum month
    {
        Jan,
        Feb,
        Mars,
        Apr,
        May,
        June,
        July,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };
    printf("Jan=%d\n", Jan);
    printf("Feb=%d\n", Feb);
    printf("Mars=%d\n", Mars);
    printf("Apr=%d\n", Apr);
    printf("May=%d\n", May);
    printf("June=%d\n", June);
    printf("July=%d\n", July);
   // printf("Aug=%d\n", Aug);
    printf("Sep=%d\n", Sep);
    printf("Oct=%d\n", Oct);
    printf("Nov=%d\n", Nov);
    printf("Dec=%d\n", Dec);

    return 0;
}
