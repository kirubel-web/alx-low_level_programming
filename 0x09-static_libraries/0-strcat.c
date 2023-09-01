#include <stdio.h>
#include "main.h"

/**
* _strcat - a function that cocantenates two strings
* @dest: the pointer to the cocantenated string
* @src: the string to be appended
* Return: returns a pointer to the string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, c = 0, d = 0, j = 0;

	for (i = 0; dest[i] != 0; i++)
		c++;
	for (i = 0; src[i] != 0; i++)
		d++;
	for (i = c; src[j] != 0; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
