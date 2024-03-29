#include "main.h"
/**
 * square - return the natural square root
 * @n: number
 * @i: iterator
 * Return: square root
 */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - return the natural square root
 * @n: number
 * Return: natual square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
