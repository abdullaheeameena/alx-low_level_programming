#include "main.h"

/**
 * append_text_to_file - append text
 * @filename: pointer to file name
 * @text_content: string to append
 * Return: --1 if file does not exist or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ro;
	int wt;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ro = open(filename, O_WRONLY | O_APPEND);
	wt = write(ro, text_content, length);

	if (ro == -1 || wt == -1)
		return (-1);

	close(ro);

	return (1);
}
