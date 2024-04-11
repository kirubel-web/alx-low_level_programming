#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers.
 *
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located.
 *         If value is not present in head or if head is NULL,
 *         your function must return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, sizes;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	sizes = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;

		for (step += sizes; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n",
				jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n",
				node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
