#include "main.h"

int check_pal(char *s, int r, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function tha returns a string in palindrome
 * @s: a string
 * Return: 1 if sring is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: length of a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function that checks palindrome character recursion
 * @s: a string
 * @r: a pointer to check string
 * @len: string length
 * Return: 1 if string is palindrome and 0 if not
 */

int check_pal(char *s, int r, int len)
{
	if (*(s + r) != *(s + len - 1))
		return (0);
	if (r >= len)
		return (1);
	return (check_pal(s, r + 1, len - 1));
}
