#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>

#define BUF_SIZE 1024
/**
 * print_error - ...
 * @message: ...
 * @filename: ...
 */
void print_error(const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}
/**
 * main - ...
 * @argc: ...
 * @argv: ..
 * Return: ....
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t rd, wrtn;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{	print_error("Usage: cp file_from file_to", "");
		exit(97); }
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{	print_error("Can't read from file", argv[1]);
		exit(98); }
	to = open(argv[2], O_WRONLY | O_CREAT
			| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (to == -1)
	{	print_error("Can't write to file", argv[2]);
		exit(99); }
	while ((rd = read(from, buffer, BUF_SIZE)) > 0)
	{
		wrtn = write(to, buffer, rd);
		if (wrtn == -1)
		{	print_error("Can't write to file", argv[2]);
			exit(99); }
	}
	if (rd == -1)
	{
		print_error("Can't read from file", argv[1]);
		exit(98);
	}
	if (close(from) == -1)
	{
		print_error("Can't close fd", argv[1]);
		exit(100);
	}
	if (close(to) == -1)
	{
		print_error("Can't close fd", argv[2]);
		exit(100);
	}
	return (0);
}
