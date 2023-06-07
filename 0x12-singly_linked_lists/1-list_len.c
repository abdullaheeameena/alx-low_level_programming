#include <stdio.h>
#include "lists.h"

/**
 * list_len - return number of list
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
