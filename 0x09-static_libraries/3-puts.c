#include <stdio.h>
#include "main.h"

/**
* _puts - a function that prints a string, followed by a new line, to stdout
* @str: the string of characters to be printed
* Return: returns nothing
*/
void _puts(char *str)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (*(str + i) == 0)
		{
			printf("\n");
			break;
		}
		printf("%c", *(str + i));
	}
}
