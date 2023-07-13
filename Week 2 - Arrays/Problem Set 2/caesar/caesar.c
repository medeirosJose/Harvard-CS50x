#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // checks if the user inputted a key and only one key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string keyString = argv[1];

    for (int i = 0; i < strlen(keyString); i++)
    {
        // checks if the key is a number
        if (!isdigit(keyString[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(keyString);

    // gets the plaintext to be encrypted
    string plaintext = get_string("plaintext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        // checks if the character is a alphanumeric character
        if (isalpha(plaintext[i]))
        {
            // checks if the character is lowercase or uppercase and applies the key
            if (islower(plaintext[i]))
            {
                plaintext[i] = ((plaintext[i] - 'a' + key) % 26) + 'a';
            }
            else if (isupper(plaintext[i]))
            {
                plaintext[i] = ((plaintext[i] - 'A' + key) % 26) + 'A';
            }
        }
    }

    printf("ciphertext: %s\n", plaintext);
    return 0;
}
