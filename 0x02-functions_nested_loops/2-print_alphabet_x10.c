#include "main.h"

/**
 * print_alphabet_x10 - this function prints the letters of the alphabet
 * in lower case 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
