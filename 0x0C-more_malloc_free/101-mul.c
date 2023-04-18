#include <stdlib.h>
#include "main.h"

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
	
