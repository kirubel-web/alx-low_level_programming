#include "main.h"
#include <stdlib.h>

/**
* _realloc - a function that reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated
* @old_size: the size, in bytes of the allocated space for ptr
* @new_size: the size, in bytes of the new memory block
* Return: returns a pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr;
	char *pptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (pptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (pptr != NULL && new_size == 0)
	{
		free(pptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		arr = malloc(new_size);

		for (i = 0; i < new_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	return (pptr);
}
