#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

