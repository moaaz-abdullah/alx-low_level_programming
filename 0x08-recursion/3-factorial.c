#include "main.h"
/**
 * factorial - function returns the factorial of a number.
 *
 * @n: The input number
 *
 * Return: The factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
