#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes a program that prints its name followed by a new line
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

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

/**
 * main - writes a program that prints all arguments it recives
 * @argc: the nunber of arguments count
 * @argv: the array of arguments vector
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
