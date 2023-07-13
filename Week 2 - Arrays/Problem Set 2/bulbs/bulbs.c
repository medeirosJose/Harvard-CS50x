#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: ");

    //must convert the message to binary
    //for each character in the message convert the character to an int
    //for each bit in the int print the bit
    //print a new line

    for (int i = 0; i < strlen(message); i++)
    {
        // this will convert each character to an int
        int character = (int) message[i];

        // this will print each bit of the character
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            int bit = (character >> (BITS_IN_BYTE - (j + 1))) & 1;
            print_bulb(bit);
        }
        // adding a blank line between each "enlighted" character
        printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
