#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);

	memset(array, c, size);

	return (array);
}
