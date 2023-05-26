#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list typesof  arguments passedtothe function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
