#include "main.h"

/**
 * get_endianness - checks if a machine is big or small endianness
 * Return: 0 if big or 1 if small
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *s = (char *) &a;

	return (*s);
}
