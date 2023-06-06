#include "lists.h"

/**
 * insert_nodeint_at_index - inserta a new node int the linked list
 * @head: firt nodein the list
 * @idx: where the neww node is inserted
 * @n: data being inserted in the node
 * Return: the new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *a;
	listint_t *t = *head;

	a = malloc(sizeof(listint_t));

	if (!a || !head)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}

	for (b = 0; t && b < idx; b++)
	{
		if (b == idx - 1)
		{
			a->next = t->next;
			t->next = a;
			return (a);
		}
		else
			t = t->next;
	}
	return (NULL);
}
