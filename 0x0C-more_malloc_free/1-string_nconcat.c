#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concatenated_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated_str == NULL)
		return (NULL);

	strncpy(concatenated_str, s1, len1);
	strncpy(concatenated_str + len1, s2, n);
	concatenated_str[len1 + n] = '\0';

	return (concatenated_str);
}
