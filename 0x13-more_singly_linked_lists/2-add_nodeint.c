#include "lists.h"

/**
 * add_nodeint - adds a node in the front of alinked list
 * @head: the first node in the linked list
 * @n: the new node
 * Return: pointer tothe new node on success  or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));

	if (!l)
		return (NULL);
	l->n = n;
	l->next = *head;
	*head = l;

	return (l);
}
