#include "lists.h"

/**
 * pop_listint - remove the node at the beginning of a linked list
 * @head: pointer to the first element of the linked list
 * Return: the elements inside the node that was deleted or
 * 0 if the node is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *emp;
	int l;

	if (!head || !*head)
		return (0);

	emp = (*head)->next;
	l = (*head)->n;
	free(*head);
	*head = emp;

	return (l);
}
