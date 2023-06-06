#include "lists.h"

/**
 * reverse_listint - returns a linked list that is reversed
 * @head: the first node in ythe linked list
 * Return: the first node in the list reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL;
	listint_t *p = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;

	return (*head);
}
