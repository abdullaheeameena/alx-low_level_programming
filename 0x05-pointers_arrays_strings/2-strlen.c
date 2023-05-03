#include "main.h"
/**
 * _strlen - accepts string and returns the length
 * @s: input
 * Return: legnth of a string
 *
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
