#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 * @argc: the number of argument count
 * @argv: the argument vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *f;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			f = argv[i];

			for (j = 0; j < strlen(f); j++)
			{
				if (f[j] < 48 || f[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(f);
			f++;
		}

		printf("%d\n", sum);
	}

	return (0);
}
