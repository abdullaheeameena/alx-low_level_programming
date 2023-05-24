#include "function_pointers.h"

/**
 * array_iterator - iterates the number in the array
 * @array: the array to iterate
 * @size: the size of the array
 * @action: action to be performed
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
