#include <stdio.h>

/* show the effect of global variables on different functions*/

int b = 10, c = 5;
fun(void);
int main()
{
    printf("In main () B=%d c=%d\n", b, c);
    fun();
    b++;
    c--;
    printf("Agian In main() B=%d c=%dn", b, c);

    return 0;
}
fun(void)
{
    b++;
    c--;
    printf(" In Fun() B=%d c=%d\n", b, c);
}