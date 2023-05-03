#include "main.h"
#include <stdio.h>

/**
 *  swap_int - swaps the values of two integers
 *  @a: input
 *  @b: input
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
