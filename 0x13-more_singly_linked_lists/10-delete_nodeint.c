#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a
 * specified index in a linked list
 * @head: first element in the list
 * @index: index of node to delete
 * Return: 1 (success), or -1 on failur
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *sp = NULL;
	listint_t *t = *head;
	unsigned int l = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (l < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		l++;
	}

	sp = t->next;
	t->next = sp->next;
	free(sp);

	return (1);
}
