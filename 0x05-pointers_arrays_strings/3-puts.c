#include "main.h"
/**
 * puts - prints a string folowed by a new line to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
        	_putchar('\n');
}
