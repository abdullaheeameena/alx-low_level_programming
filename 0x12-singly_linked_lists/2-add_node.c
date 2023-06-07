#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_note - adds a node at the begining of a linked list
 * @head: pointer to the list
 * @str: string to add to node
 * Return: the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int len = 0;

	while (str[len])
		len++;

	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);

	s->str = strdup(str);
	s->len = len;
	s->next = (*head);
	(*head) = s;

	return (*head);
}
