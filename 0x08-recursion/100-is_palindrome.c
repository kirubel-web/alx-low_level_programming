#include "main.h"
/**
 * is_palindrome - returns 1 if a string is palindrome
 * @s: string
 * Return: palidrome string
 */
int is_palindrome(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		return (is_palindrome(s + 1) + 1);
	}
	return (1);
}
