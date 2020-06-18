#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: variable
 * Return: (1)
 *
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}

		return (0);

}
