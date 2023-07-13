#include <cs50.h>
#include <stdio.h>


int get_size(void);
void print_grid(int size);

int main(void) //this is the main program
{
    //get size of grid
    int n = get_size();

    //print bricks
    print_grid(n);

}

//custom functions will be below

int get_size(void) //void inside a functions means that function gets no input
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        printf("#");
        }
    printf("\n");
    }
}