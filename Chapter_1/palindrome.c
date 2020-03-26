
#include <stdio.h>
#include <string.h>

/*Program to find whether a string is palindrome or not
 A palindrome is a series of writing characters that,
with spaces and punctuation excluded, remain unchanged if you read it backwards.*/

int main()
{
    char s1[20], s2[20];
    printf("Enter a string\n");
    scanf("%s", s1);
    strcpy(s2, s1); // copy s1
    strrev(s2); // reverse string 
    if (strcmp(s1, s2) == 0) 
        printf("string is a palindrome");
    else
        printf("string not is a palindrome");

    return 0;
}
