#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's X? ");
    int y = get_int("What's Y? ");

    if (x < y)
    {
        printf("\nX is less than Y");

    }
    else if (x > y)
    {
        printf("\nX is greater than Y");

    }
    else
    {
        printf("\nX is equal to Y");

    }
}