#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @lower: pointer
 *
 *
 */

char *string_toupper(char *lower)
{

	char *out = lower;

	while (*lower != 0)
	{
		if (*lower >= 'a' && *lower <= 'z')
		{
			*lower = *lower - 32;
		}

	lower++;
	}

	return (out);
}
