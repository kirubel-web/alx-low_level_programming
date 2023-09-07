#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes it to zero
* @nmemb: numbe rof elements in the array
* @size: size of the array
* Return: returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, c;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = nmemb * size;

	ptr = malloc(c);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = 0;

	return ((void *) ptr);
}
