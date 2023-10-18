#include "main.h"

/**
 * _puts - Prints a srting, followed by a new line.
 * @str: Pointer to the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\0');
}
