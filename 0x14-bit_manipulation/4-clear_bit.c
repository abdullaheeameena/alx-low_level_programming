#include "main.h"

/**
 * clear_bit -  set the value of a bit to 0
 * @n: numder to be cleared
 * @index: index of the bit to be cleared
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
