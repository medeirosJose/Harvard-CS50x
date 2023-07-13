#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        //gets the height input from the user
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));

    for (int i = 1; i <= height; i++)
    {
        // calculates the necessary space per line
        for (int blank = 1; blank <= height - i; blank++)
        {
            printf(" ");
        }

        //prints the correct ammount of "blocks"/#'s
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}