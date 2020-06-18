#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable
 * Return: (1)
 *
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}

		return (0);

}
