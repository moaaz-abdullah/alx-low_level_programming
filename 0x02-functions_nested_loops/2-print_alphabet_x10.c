#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet letters
 * 10 times
 *description: The function uses two nested loops. 
 *Return: no return value
 */
void print_alphabet_x10(void)
{
    int i = 0;
    int lett;
    while (i++ <= 9)
    {
        for (lett = 'a'; lett <= 'z'; lett++)
            _putchar(lett);

        _putchar(10);
    }
}
