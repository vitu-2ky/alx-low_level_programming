#include "main.h"

/**
 * set_string - function that sets value of a pointer to a char
 * @s: a pointer to another pointer
 * @to: a pointer to a char
 * Return: always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
