#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)

{
    string name = get_string("Name: ");

    /* int n = 0;
    while (name[n] != '\0')
    {
        n++;
    } */
    int n = strlen(name);

    printf("%i\n", n);
}