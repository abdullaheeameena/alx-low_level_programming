#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - ...
 * @a: ...
 * @b: ...
 * Return: ...
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: the operand
 * @b: the operand
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the operand
 * @b: the operand
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the operand
 * @b: the operand
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo of two numbers
 * @a: the operand
 * @b: the operand
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
