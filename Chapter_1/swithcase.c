#include <stdio.h>

/* switch statement Display dayz*/

int main()
{
    char ch;
    printf("Enter m for Monday\nt for Tuesday\nw for Wednesday\nh for Thursday\nf for Friday\ns for Saturday\nu for Sunday\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'm':
    case 'M':
        printf("Monday");
        break;
    case 't':
    case 'T':
        printf("Tuesday");
        break;
    case 'w':
    case 'W':
        printf("Wednesday");
        break;
    case 'h':
    case 'H':
        printf("Thursday");
        break;
    case 'f':
    case 'F':
        printf("Friday");
        break;
    case 's':
    case 'S':
        printf("Saturday");
        break;
    case 'u':
    case 'U':
        printf("Sunday");
        break;
    default:
        printf("Wrong input");

        break;
    }

    return 0;
}
