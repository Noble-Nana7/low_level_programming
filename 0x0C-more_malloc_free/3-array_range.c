#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * (max - min + 1));

	/* Check if malloc fails */
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
