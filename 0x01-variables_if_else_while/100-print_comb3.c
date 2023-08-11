#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits.
 *
 * Return: 0.
 */
int main(void)
{
	int number1, digit2;

	for (number1 = 0; number1 < 9; number1++)
	{
		for (digit2 = number1 + 1; digit2 < 10; digit2++)
		{
			putchar((number1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (number1 == 8 && digit2 == 9)
		    {
				continue;
		    }
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
