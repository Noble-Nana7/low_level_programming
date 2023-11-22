#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: person's name
 * @f: pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
