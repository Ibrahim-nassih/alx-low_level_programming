#include "main.h"
/**
 * _isupper - check if c is upper
 *
 * @c: input for character
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
