#include "main.h"
/**
 *prime2 - makes possible
 *@a:carrier
 *@b: carrier
 *Return: on succes 1
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 *is_prime_number - checks if a number is prime
 *@n: Number Integer
 *Return: on success 1.
 *on error - On error, -1 is returned, and errno is set appropriately
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
