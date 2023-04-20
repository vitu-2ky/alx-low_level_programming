#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * po_add - function that adds elements
 * @a: an element
 * @b: an element
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts elements
 * @a: an element
 * @b: an element
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function tha multiplies elements
 * @a: an element
 * @b: an element
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function tha divides elements
 * @a: an element
 * @b: an element
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that give modulus of elements
 * @a: an element
 * @b: an element
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a % b);
}

