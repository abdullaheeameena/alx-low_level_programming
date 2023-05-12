#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument content
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
