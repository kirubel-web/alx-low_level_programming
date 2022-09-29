#include "main.h"
/**
 * _print_rev_recursion - rrri
 * @s: parametyer ghj
 */
void_print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
_print_rev_recursion(s + 1);
_putchar(*s);
	}
}
int main()
{
	return 0;
}
