#include "main.h"

/**
* _isupper - checks if for uppercase character
* @c: the character to be checked
* Return: returns 1 is c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
