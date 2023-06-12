#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: the number of argument count
 * @argv: the argument vector
 * Return: always 0 successful
 */

int main(int argc, char *argv[])
{
	int i1 = 0, i2 = 0;

	if (argc == 3)

	{
		i1 = atoi(argv[1];
		i2 = atoi(argv[2];
		printf("%d\n", i1 * i2);
	}

	else

	{
	printf("error\n");
	return (1);
	}

	return (0);
}
