#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



int calculateGrade(int letters, int sentences, int words);

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int sentences = 0;
    int words = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            // adds to the letters array +1 per letter
            letters++;

            // if the next character is empty or a ',', adds +1 to words
            if (text[i + 1] == ' ' || text[i + 1] == ',')
            {
                words++;
            }
            // if the next characters is a punctuation, it adds +1 to both words and sentences
            if (text[i + 1] == '.' || text[i + 1] == '!' || text[i + 1] == '?')
            {
                words++;
                sentences++;
            }
        }
    }
    // runs the function calculateGrade which returns the proper and rounded value
    int grade = calculateGrade(letters, sentences, words);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }

    /* printf("Letters: %i\n", letters);
    printf("Sentences: %i\n", sentences);
    printf("Words: %i\n", words); */
}

int calculateGrade(int letters, int sentences, int words)
{

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    /* printf("L: %f\n", L);
    printf("S: %f\n", S);
    printf("index: %f\n", index); */

    return round(index);

}