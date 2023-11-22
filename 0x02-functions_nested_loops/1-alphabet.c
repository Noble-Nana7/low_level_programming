#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 0 (Always)
 */

void print_alphabet(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		_putchar (abc);
		abc++;

	}
	_putchar ('\n');

}
