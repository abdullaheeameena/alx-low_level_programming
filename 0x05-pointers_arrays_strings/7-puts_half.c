#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: input
 * Return: length
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