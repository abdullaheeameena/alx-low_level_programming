#include "main.h"

/**
 * flip_bits - count the number of bitsto change from the other
 * @n: the first number
 * @m: the second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, d = 0;
	unsigned long int cu;
	unsigned long int x = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		cu = x >> a;
		if (cu & 1)
			d++;
	}
	return (d);
}
