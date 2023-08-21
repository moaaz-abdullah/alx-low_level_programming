#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: pointer for the first value
 * @b: pointer for the second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
