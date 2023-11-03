#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len1 + ((n >= len2) ? len2 : n) + 1));

	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 to the concatenated string */
	for (j = 0; j < n && s2[j] != '\0'; j++)
		concat[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i + j] = '\0';

	return (concat);
}
