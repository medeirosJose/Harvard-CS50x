#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("X: ");
    long y = get_long("Y: ");

    //printf("%li\n", x + y);
    //float z = (float) x / (float) y;
    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}