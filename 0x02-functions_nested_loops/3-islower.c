B#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: variable to test
 *
 *
 * Return: Always (1) (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
