#include "main.h"
/**
 * root - returns natural square root
 * @n: carrier integer
 * @ans: iterates from 1 to n
 * Return: always return 1 on succsess
 * on error, -1 is returned, and errno is set appropriately
 */
int root(int n, int ans)
{
	if (ans * ans == n)
		return (ans);
	if (ans * ans > n)
		return (-1);
	return (root(n, ans + 1));
}
/**
 *_sqrt_recursion - same function
 *@n: carrier integer
 *Return: always 1
 *on error, -1 is returned, and errno is set appropriately
 */

int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
