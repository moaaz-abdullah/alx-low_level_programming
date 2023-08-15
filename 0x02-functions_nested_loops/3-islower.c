#include "main.h"
/**
*description - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or can return 1
*/
int _islower(int cha)
{

if (cha >= 'a' && cha <= 'z')
return (1);

return (0);

}
