#include <stdlib.h>
#include "main.h"

<<<<<<< HEAD
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
=======
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *multi, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds the length of a string
 * @str: the stringto be measured
 * Return: the string length
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - function creates an array of chars and initializes it
 * with character 'x' and add a terminating null byte.
 * @size: the size of an array
 * Desciption: incase of insufficient space exit status with 98
 * Return: apointer to an arry
 */

char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for( index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * iterate_zeroes - iterates through a string numnbers containing
 * leading zeroes until it hits a non-zero number
 * @str: string of numbers to iterate through
 * Return: ponter to next non- zero element
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - function that converts digit character to
 * corresponding int
 * @c: character to be converted
 * Description: if c is a non-digit the function exists with a status of 98
 * Return: converted int
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - multiplkies string of numbers by a single digit
 * @prod: the buffer to store the result
 * @mult: string of numbers
 * @digti: a single digit
 * @zeroes: the necessary number of leading zeroes
 * Description: exit status value 98 if mult contains a non digit
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens - 0;

	mult_len = find_len(mult) - 1;
	mult += mult-len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

		while (zeroes--)
		{
			*prod = '0';
			prod--;
		}

		for (; mult_len >= 0; mult-len--, mult--, prod--)
		{
			if (*mult < '0' || *mult > '9')
			{
				printf("Error\n");
				exit(98);
			}

			num = (*mult - '0') * digit;
			num += tens;
			*prod = (num % 10) + '0';
			tens = num / 10;
		}

		if (tens)
			*prod = (tens % 10) + '0';
}

/**
 * add_nums - adds the numbers stored in two strings
 * @final_prod: buffer storing running final product
 * @next_prod: next product to be added
 * @next_len: length of next_prod
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_prod >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argv: number of arguments passed in a program
 * @argc: an aray of pointers to the arguments
 * Description: exit status 98 if number of arguments is incorrect
 * or one number contains a non-digit
 * Return: always 0
 */
 int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (arg != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if  (*(arrgc[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2] == '0')
			argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0'|| *(argc[2]) == '\0')
	{
	
>>>>>>> 77cbc19ccd7824b5473724599c7d279297824294
