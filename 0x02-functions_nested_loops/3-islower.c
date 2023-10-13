#include "main.h"

/**
 * _islower - this checks for lowercase letters
 * @c: parameter to be checked
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
