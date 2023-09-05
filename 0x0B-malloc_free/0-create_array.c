#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: input of array
 * @c: initializing char
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *pstr;
	unsigned int i;

	pstr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		pstr[i] = c;
	pstr[i] = 0;
	return (size < 1 ? 0 : pstr);
}
