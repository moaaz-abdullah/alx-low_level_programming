#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between -RAND_MAX/2 and RAND_MAX/2
    n = rand() - RAND_MAX / 2;

    // Print the generated number
    printf("The number %d is ", n);

    // Check whether the number is positive, negative, or zero
    if (n > 0) {
        printf("positive\n");
    } else if (n < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return (0);
}

