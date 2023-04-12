#include "main.h"

int actual_prime(int n, int r);

/**
 * is_prime_number - function that returns an input integer prime number or not
 * @n: number to return
 * Return: 1 if input integer is a prime number and,
 * 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function that calculates a prime number
 * @n: number to be calculated
 * @r: pointer to calculated number
 * Return: 1 if n is a pime number and 0 if not
 */

int actual_prime(int n, int r)
{
	if (r == 1)
		return (1);

	if (n % r == 0 && r > 0)
		return (0);
	return (actual_prime(n, r - 1));
}
