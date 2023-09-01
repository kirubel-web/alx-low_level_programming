#include <stdio.h>
#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: a pointer to a string
* Return: returns the length of the string as an int
*/
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0; 1 ; i++)
	{
		if (*(s + i) == 0)
			break;
		c++;
	}
	return (c);
}
