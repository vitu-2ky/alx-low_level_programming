#include "main.h"

/**
 * _isupper - Checks if a letter is an uppercase
 *  @c: input character
 *  Return: 1 for the uppercase letter, or 0 for anthing else
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
