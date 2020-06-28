#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer of type char
 * @b: variable of type char
 * @n: variable of type char
 * Return: s
 *
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char **out;

	out = &s;
	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}

	return (*out);

}
