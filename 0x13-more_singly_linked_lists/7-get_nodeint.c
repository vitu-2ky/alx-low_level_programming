#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node,
 * of a listint_t list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
