#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and print it out to stdout
 * @filename: the file to be read
 * @letters: amount of letters read
 * Return: 0 if fuction fails and w- if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t d;
	ssize_t wt;
	ssize_t m;
	char *f;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);

	f = malloc(sizeof(char) * letters);
	m = read(d, f, letters);
	wt = write(STDOUT_FILENO, f, m);

	free(f);
	close(d);
	return (wt);
}
