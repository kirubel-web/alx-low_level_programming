#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index
* @n: the number
* @index: the index
* Return: returns -1 (Error), 1 (Success or worked)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = (*n & ~mask) | (1 << index);

	return (1);
}
