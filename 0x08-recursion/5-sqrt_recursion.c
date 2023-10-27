#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - This Fuction returns the natural squareroot
 * of any number.
 * @n: The number to print thw squareroot of.
 * Return: The squareroot of n or -1 if error.
 */
 
int _sqrt_recursive(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number.
 * @n: number to find the square root of.
 * @i: iterator.
 *
 * Return: the resulting squareroot.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return(-1);
	}
	if (i * i == n)
	{
		return(i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
