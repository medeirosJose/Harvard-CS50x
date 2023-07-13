#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y') // it must be 'n', not "n"
    {
        printf("\nAgreed!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("\nNot agreed!\n");
    }else
    {
        printf("\nInvalid character!\n");
    }
}