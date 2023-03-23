#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 *  @c: The number to be checked
 *  Return: 1 for the upper letter or 0 for anthing else
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
