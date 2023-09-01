#include <stdio.h>
/**
 * main - prints arguments when it receives.
 * @argc: number of command.
 * @argv: array contains the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
