#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - test _strdup
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("ALX is awesome!");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = _strdup("Holberton School!");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = _strdup("");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = _strdup(NULL);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = _strdup("First, solve the problem. Then, write the code.");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}
