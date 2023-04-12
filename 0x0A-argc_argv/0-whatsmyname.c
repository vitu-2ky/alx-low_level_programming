#include <stdio.h>

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
