#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the pointer to the address of the head of the listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	previous = NULL;
		while ((*head)->next != NULL)
		{
			ahead = (*head)->next;
			(*head)->next = previous;
			previous = *head;
			*head = ahead;
		}
		(*head)->next = previous;
		return (*head);
}
