#include "function_pointers.h"

/**
 * int_index - looks for an integer
 * @array: input integer array
 * @size: array size
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element ffor which the cmp
 * function does not return 0. If no elements are found,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
