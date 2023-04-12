#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments
 * @argc: the number of argument count
 * @argv: the argument vector
 * Return: always 0 (successfully)
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
