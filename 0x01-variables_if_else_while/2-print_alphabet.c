#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lett;

        for (lett = 'a'; lett <= 'z'; lett++)
                putchar(lett);
        putchar('\n');

        return (0);
}
