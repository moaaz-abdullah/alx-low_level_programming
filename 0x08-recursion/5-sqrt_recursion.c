#include "main.h"
/**
 * my_sqrt_recursion - This is my my_sqrt_recursion
 *                     function about the square root
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: This is the result
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
