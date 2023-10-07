#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program prints the alphabets in lowercase
 * and then in upper case.
 * This is a linux env so the ASCII values for
 * letters are used!
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 97;
	int end = 122;
	int START = 65;
	int END = 90;

	for (int i = start; i <= end; ++i)
	{
		putchar(i);
	}
	for (int a = START; a <= END; ++a)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
