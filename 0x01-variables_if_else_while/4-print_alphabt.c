#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code sends the lowercase alphabets
 * to the stdout but excludes the letters q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
