#include <stdio.h>
#include <cs50.h>

int main(void)
{
   /*  char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c %c %c\n", c1, c2, c3);
    // the code below will print the ASCII code of the characters above
    printf("%i %i %i\n", c1, c2, c3); */



    /*     string s = "HI!";
    //printf("%s\n", s);
    printf("%c%c%c\n", s[0], s[1], s[2]);
    // the code below will print the ASCII code of the characters above + the null character
    printf("%i %i %i %i %i\n", s[0], s[1], s[2] , s[3]); */

    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);


}