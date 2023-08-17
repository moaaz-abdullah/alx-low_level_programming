#include <unistd.h>
#include "main.h"

/**
 * _putchar
 *
 * @c: print character
 *
 * Return: 1
 *
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

