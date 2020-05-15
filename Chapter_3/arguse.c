#include <stdio.h>

/* pass arguments by value and by reference  */

int main()
{
    int k, m, other(int, int *);
    printf("Adress ofk&m in main(): %u%u\n", &k, &m);
    other(k, m);
    return 0;
}
other(int k, int *m)
{
    printf("Adress of k&m in other() %u%u\n", &k, m);
}
