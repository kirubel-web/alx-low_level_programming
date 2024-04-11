#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
