#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using Jump search
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_index;
	listint_t *prev, *node;

	if (list == NULL || size == 0)
		return (NULL);

	step = (size_t)sqrt((double)size);
	prev = node = list;

	while (node->next != NULL && node->n < value)
	{
		prev_index = node->index;
		prev = node;
		for (size_t i = 0; i < step && node->next != NULL; i++)
			node = node->next;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev_index,
			node->index);

	node = prev;
	while (node != NULL && node->index <= prev_index + step && node->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
