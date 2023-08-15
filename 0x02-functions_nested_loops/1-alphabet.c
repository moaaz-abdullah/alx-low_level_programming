#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * 
 * Return: No retutn.
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
    
	_putchar('\n');
}
