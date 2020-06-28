#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer of type char
 * @b: variable of type char
 * @n: variable of type unsigned int
 * Return: string
 *
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
