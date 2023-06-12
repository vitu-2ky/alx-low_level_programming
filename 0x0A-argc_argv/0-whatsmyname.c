#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

=======
 * main - programm that prints the name of the program,
 * followed by a new line
 * @argc: number of arguments
i * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
>>>>>>> 962bbb96678dd443c2e6478a3e3f1bc5243e1641
{
	printf("%s\n", *argv);
	return (0);
}
