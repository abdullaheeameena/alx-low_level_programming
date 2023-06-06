#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: the first input of the linked list
 * @n: data new input is inserted on
 * Return: pointer to new node on success or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *i = *head;

	end = malloc(sizeof(listint_t));

	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (i->next)
		i = i->next;

	i->next = end;

	return (end);
}
