#include <stdio.h>
/**
 * main - program prints number of arguments passed into it
 *
 * @args: arg counter
 * @argv: arg vector
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
