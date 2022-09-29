#include "main.h"
/**
 * factorial - search
 * @n: number
 * Return: the factorial
 */
int factorial(int n)
{
	int next;
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	next = factorial(n - 1);
	return (n * next);
}
