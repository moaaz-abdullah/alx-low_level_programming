#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int lenD, lenS;

	lenD = 0;
	lenS = 0;

	while (*(dest + lenD) != '\0')
		lenD++;

	while (*(src + lenS) != '\0' && lenD < 97)
	{
		*(dest + lenD) = *(src + lenS);
		lenD++;
		lenS++;
	}
	*(dest + lenD) = '\0';
	return (dest);
}
