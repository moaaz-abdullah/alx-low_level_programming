#include <unistd.h>
#include "main.h"

/**
 * Return: 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
