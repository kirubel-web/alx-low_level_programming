#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_digit(char *s);
int _strlen(char *s);
void errors(void);
/**
* main -  a program that multiplies two positive numbers
* @argc: the number of arguments
* @argv: an array of strings containing each argument
* Return: returns 0 (success)
*/
int main(int argc, char **argv)
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

/**
* is_digit - checks if every character of a string is a digit
* @s: the string to be checked
* Return: returns 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
* _strlen - calculates the length of a string (excluding the null-terminator)
* @s: the string to be checked
* Return: returns the length of the string as an int
*/
int _strlen(char *s)
{
	int i = 0, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;

	return (c);
}

/**
* errors - prints out "Error" if an error is encountered and exits with
* a status of 98
* Return: returns nothing
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
