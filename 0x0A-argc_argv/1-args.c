#include <stdio.h>

/**
 * main - writes a program that prints the number of arguments passed into it
 * @argc: the number of argumnets count
 * @argv: the array of argument vector
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
