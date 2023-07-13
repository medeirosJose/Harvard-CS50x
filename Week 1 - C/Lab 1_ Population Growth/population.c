#include <cs50.h>
#include <stdio.h>
//Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

// For example, if we were to start with n = 1200 llamas, then in the first year,
// 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away.
// At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.
/*Your program should first prompt the user for a starting population size.


Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.
To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas.

We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away,
so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.*/

int main(void)
{
    int start;
    int end;
    float total = 0;
    int years = 0;

    do
    {
        // TODO: Prompt for start size
        start = get_int("\nStart size: ");
    }
    while (start < 9);

    do
    {
        // TODO: Prompt for end size
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    total = start;
    while (total < end)
    {
        total = start + (start / 3) - (start / 4);
        start = total;
        years++;
    }


    // TODO: Print number of years
    printf("Years: %i\n", years);

}

