#include <stdio.h>
#include <cs50.h>

const int arrayLenght = 3;

float average(int array[]);

int main(void)
{
    /* int score1 = 72;
    int score2 = 73;
    int score3 = 33; */

    // using arrays:
    /* int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: "); */

    // using arrays and loops:
    int scores[arrayLenght];

    for (int i = 0; i < arrayLenght; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // It's possible to assign at one side of the equation a float value, and the other side an int value.
    // The compiler will convert it all to float.
    printf("Average: %f\n", average(scores));

}

float average(int array[])
{
    float sum = 0;

    for (int i = 0; i < arrayLenght; i++)
    {
        sum += array[i];
    }

    // return sum / 3;
    return sum / (float) arrayLenght;
}