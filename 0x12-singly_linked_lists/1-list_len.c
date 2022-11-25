#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: name of the list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
