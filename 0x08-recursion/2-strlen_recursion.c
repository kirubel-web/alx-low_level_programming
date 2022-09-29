#include "main.h"
/**
 * _strlen_recursion - gives lengtghkk
 * @s: hjkj
 * Return: length
 */
int_strlen_recursion(char *s)
{
	int len = 0;
	if (*s != '\0')
	{
		len++;
			len += _strlen_recursion(s + 1);
	}
	return (len);
}
int main()
{
	return 0;
}
