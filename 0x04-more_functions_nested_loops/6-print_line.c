#include "main.h"
#include <stdio.h>

/**
 * print_line - will print line dependent on the integer n
 * @n: the number of '_' characters to use
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
