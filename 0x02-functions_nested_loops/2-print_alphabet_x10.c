#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* 10 times.
*desc: The function uses 2 nested loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
int counter = 0;
int lett;
while (counter++ <= 9)
{
for (lett = 'a'; lett <= 'z'; lett++)
_putchar(lett);

_putchar(10);
}
}
