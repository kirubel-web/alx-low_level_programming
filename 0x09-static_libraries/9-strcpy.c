#include <stdio.h>
#include "main.h"

/**
* _strcpy - a function that copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest
* @dest: the array to be returned as a pointer
* @src: the string to be copied
* Return: returns the string pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			break;
	}
	return (dest);
}
