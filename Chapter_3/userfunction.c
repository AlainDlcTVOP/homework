#include <stdio.h>

/* simialr variable names can be used in different functions */

fun();
int main()
{
    int b = 10, c = 5;

    printf("In main() B=%d C=%d", b, c);
    fun();

    return 0;
}
fun()
{
    int b = 20, c = 10;
    printf("In fun() B=%d C=%d ", b, c);
}