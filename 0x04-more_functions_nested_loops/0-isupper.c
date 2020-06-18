#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable
 * Return: (1)
 *
 */

int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);

	}
}
