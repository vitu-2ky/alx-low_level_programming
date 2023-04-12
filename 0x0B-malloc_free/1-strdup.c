#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to a newly allocated space,
 * in memory with a copy of the string in a given parameter.
 * @str: a char
 * Return: alwyas 0 (success)
 */

char *_strdup(char *str)
{
	char *sss;
	int i, y = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	sss = malloc(sizeof(char) * (i + 1));

	if (sss == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		sss[y] = str[y];

	return (sss);
}
