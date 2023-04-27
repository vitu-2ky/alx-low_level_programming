#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all elements of list_t list
 * @h: pointer to the list_t list to print
 * Return: if str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
