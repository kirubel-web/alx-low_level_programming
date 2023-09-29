#include "main.h"

/**
* get_bit - Function that returns the value of a bit at a given index
* @n: the integer to be operated on
* @index: the index
* Return: returns the value of the bit at index or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);

	return (-1);
}
