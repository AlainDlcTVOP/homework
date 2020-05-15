#include <stdio.h>

/* display message using user-defined function */

void message(void);
int main()
{
    message();
    return 0;
}
void message(void)
{
    puts("Have a nice Day");
}