#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //gets the name of the user
    string name = get_string("What's your name? ");
    //prints its name
    printf("hello, %s\n", name);
}