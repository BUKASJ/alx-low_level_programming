#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the listint_t list to be freed
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
