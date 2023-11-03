#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *temp;

	/* If nmemb or size is 0, return NULL */
	if ((nmemb == 0) || (size == 0))
		return (NULL);

	/* Allocate memory for an array of nmemb elements of size bytes each */
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Set the memory to zero */
	temp = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;

	return (ptr);
}
