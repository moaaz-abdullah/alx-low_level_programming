#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char.
 * @s: source string
 * @c: tested char
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
