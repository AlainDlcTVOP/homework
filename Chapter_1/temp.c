#include <stdio.h>

/* Convert temperature from degree centigrade to Fahrenheit*/
int main()
{
    float c, f;
    printf("enter temp in centigrade: \n");
    scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("temp in Farenheit=%f", f);

    /* code */
    return 0;
}
