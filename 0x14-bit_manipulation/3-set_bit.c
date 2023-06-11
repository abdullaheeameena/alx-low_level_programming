#include "main.h"

/**
 * set_bit - sets the bit at an index to 1
 * @n: number to change
 * @index: index of bit set to 1
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
