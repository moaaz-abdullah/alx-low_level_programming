#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * 
 * Return: No retutn.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
    
	_putchar('\n');
}
