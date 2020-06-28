#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer of type char
 * @b: variable of type char
 * @n: variable of type unsigned int
 * Return: out
 *
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
		s++;
	}

	return (s);

}
