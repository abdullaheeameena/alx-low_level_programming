#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the data in a list
 * @h: the list to be printed
 * Return: nodes that have being printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		a++;
		h = h->next;
	}
	return (a);
}
