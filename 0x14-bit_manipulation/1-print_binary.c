#include "main.h"

/**
 * print_binary - prints the binary version of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a;
	int b = 0;
	unsigned long int cu;

	for (a = 63; a >= 0; a--)
	{
		cu = n >> a;

		if (cu & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
