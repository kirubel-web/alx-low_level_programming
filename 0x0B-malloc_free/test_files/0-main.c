#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *a;

	a = create_array(98, 'H');
	if (a == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(a, 98);
	free(a);

	a = create_array(72, 'S');
	if (a == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(a, 72);
	free(a);

	a = create_array(102, 10);
	if (a == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(a, 102);
	free(a);

	a = create_array(96, '\0');
	if (a == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(a, 96);
	free(a);

	return (0);
}
