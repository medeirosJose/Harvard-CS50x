#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    //will be using the ascii chart

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //if (s[i] >= 'a' && s[i] <= 'z')
        printf("%c", toupper(s[i]));
            //printf("%c", s[i] - 32);

    }
    printf("\n");
}