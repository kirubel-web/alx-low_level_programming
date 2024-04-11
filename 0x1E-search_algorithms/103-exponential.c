#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value;
				index = index * 2)
			printf("Value checked array[%ld] = [%d]\n",
					index, array[index]);
	}

	right = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
			index / 2, right);

	return (_binary_search(array, index / 2, right, value));
}

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (right >= left)
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
