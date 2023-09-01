#include <stdio.h>
/**
 * main - prints its name, and a new line.
 * @argc: num of command line arguments.
 * @argv: array contains the program command line arguments.
 * Return: 0 - on success.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
