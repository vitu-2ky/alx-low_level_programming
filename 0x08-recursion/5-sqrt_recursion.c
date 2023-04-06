#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to the natural square root of a number
 * @n: number of calculated square root of
 * @j: pointer to natural square root of n
 * Return: square root result
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if  (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
