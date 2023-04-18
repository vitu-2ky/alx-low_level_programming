#include <stdlib.h>
#include "main.h"

/**
 * _print - a program that multiplies two numbers
 * @str: string
 * @l: size of a string
 * Return: void
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putvhar(str[i])
				i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and puts answer into dest
 * @n: char to multiply
 * @num: stirng to multiply
 * @num_index: last non NULL index of num
 * @dest: multiplication destinatio
 * @dest_index: highest index start addition
 * Return: pointer to dest NULL if fail
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, p, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, p = dest_index; j >= 0; j--, p--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul /10;
		add =(dest[p] - '0') + (mul % 10) + addrem;
		addrem = add /10;
		dest[p] = add % 10 + '0';
	}
	for (addrem += mulrem; p >= 0 && addrem; p--)
	{
		add = (dest[p] - '0') + addrem;
		addrem = add /10;
		dest[p] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits -checks the aerguments to nensure they are digits
 * @av: pointer to arguments
 * Return: 0 if they are digits and 1 if not
 */

int check_for_digits(char *av)
{
	int i, j;

	for (i = j; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][i] > '9')
				return (1);
		}
	}
	retuen (0);
}

/**
 * init - initializes a string
 * @str: string to initialize
 * @l: string lenght
 * Return: void
 */

void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
}

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 or 98 exit status if it fails
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";
