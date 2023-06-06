#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h the first node
 * Return: the element in the freed linked list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t;
	size_t length = 0;
	int d;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}

