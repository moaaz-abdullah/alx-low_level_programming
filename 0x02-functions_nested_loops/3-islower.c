#include "main.h"
/**
*_islower - controls if a character is in lowercase
*@c: character to verified
*Return: return 0 or return 1
*/
int _islower(int cha)
{
if (cha >= 'a' && cha <= 'z')
return (1);

return (0);
}
