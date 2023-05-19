#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *str;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n && j < len2; j++)
		str[i++] = s2[j];

	str[i] = '\0';

	return (str);
}
