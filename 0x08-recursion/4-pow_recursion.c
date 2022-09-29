#include "main.h"

/**
 *_pow_recursion - raises x to the power of u
 *@x: carrier
 *@y: power
 *Return: on success 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
