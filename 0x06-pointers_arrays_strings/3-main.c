#include "main.h"

/**
 * _strcmp - compares
 * @s1: first
 * @s2: sond
 * Return: negative
 */

int _strcmp (char *s1, char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
