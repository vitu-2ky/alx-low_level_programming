#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function to perfom,
 * the operation asked by the user.
 * @s: operator passed as an argument to the program
 * Return: NULL if s doesn't match any of the expected,
 * 5 operators +, -, *, /, %.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
