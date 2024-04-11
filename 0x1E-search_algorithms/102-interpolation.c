#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n",
					pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n",
					pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
