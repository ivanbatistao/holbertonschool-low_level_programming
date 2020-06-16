#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @result: variable
 *
 *
 * Return: Always (1) (Success)
 */

int _abs(int result)
{
	if (result < 0)
	{
		result = -1 * result;
	}

	return (result);

}
