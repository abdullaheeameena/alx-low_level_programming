#include "main.h"
#include <stdio.h>

/**
 * swaps int - swaps the values of two integers
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
