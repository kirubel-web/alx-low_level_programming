#include "main.h"

/**
* print_binary - a function that prints the binary representation of a number
* @n: is the number to be printed in binary
* Return: returns nothing to output
*/
void print_binary(unsigned long int n)
{
  int i, c = 0;
	unsigned long int current;
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if ((current & 1) == 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
			_putchar('0');
	}
	if (c == 0)
		_putchar('0');
}

