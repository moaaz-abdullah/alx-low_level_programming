#include "main.h"

/**
 * puts2 - prints 1 char out of 2 of a string
 * and a new line after that
 * @str: string to print the chars
 */a
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
