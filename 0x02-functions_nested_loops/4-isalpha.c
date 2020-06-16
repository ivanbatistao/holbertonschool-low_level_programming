#include "holberton.h"
/**
 * _isalpha - checks for lowercase character
 * @c: variable to test
 *
 *
 * Return: Always (1) (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A')  && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
