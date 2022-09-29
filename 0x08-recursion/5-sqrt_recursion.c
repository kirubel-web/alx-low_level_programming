#include "main.h"

int root (int n, int ans)
{
	if (ans * ans == n)
		return (ans);
	if (ans * ans > n)
		return (-1);
	return (root(n, ans + 1));
}

int _sqrt_recursion(int n)
{
	return(root (n, 0));
}
