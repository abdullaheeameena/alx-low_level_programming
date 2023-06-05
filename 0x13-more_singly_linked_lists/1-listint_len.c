#include "lists.h"

/**
 * listint_len - counts and returns the total number of inputs in a linked list
 * @h: the linked list to be counted
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
