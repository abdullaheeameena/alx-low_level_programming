#include "lists.h"

/**
 * print_listint - prints the entire input of alinked list
 * @h: the type of linked list to print
 * Return: the complete number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
