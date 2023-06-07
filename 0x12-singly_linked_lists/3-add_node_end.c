#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to the lisst
 * @str: string to be added
 * Return:new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (t->next)
		t = t->next;

	t->next = a;

	return (a);
}
