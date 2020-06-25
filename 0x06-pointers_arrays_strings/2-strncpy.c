#include "holberton.h"

/**
 * _strncpy - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: p - dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	char *out = dest;

	j = 0;
	while ((j < n) && (*dest = *src) != 0)
	{
		dest++;
		src++;
		j++;
	}

	while (j < n)
	{
		*dest = '\0';
		j++;
		dest++;
	}

	return (out);
}
