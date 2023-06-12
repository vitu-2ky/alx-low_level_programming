#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
<<<<<<< HEAD

/**
 * check_num - check - string there are digit
 * @str: array str
=======
/**
 * check_num - check - string there are digit
 * @str: array str
 *
>>>>>>> 78724c94cd6e409f729aa1cb0d049acbc22ae309
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{

	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
<<<<<<< HEAD
=======
 *
>>>>>>> 78724c94cd6e409f729aa1cb0d049acbc22ae309
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

<<<<<<< HEAD
=======
  
>>>>>>> 78724c94cd6e409f729aa1cb0d049acbc22ae309
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

<<<<<<< HEAD

=======
	
>>>>>>> 78724c94cd6e409f729aa1cb0d049acbc22ae309
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
