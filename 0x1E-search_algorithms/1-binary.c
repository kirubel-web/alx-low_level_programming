#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located.
 *         If value is not present in array or if array is NULL
 *         your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");

		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}
