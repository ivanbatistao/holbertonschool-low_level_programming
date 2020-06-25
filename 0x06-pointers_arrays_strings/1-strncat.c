#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: out - dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *out = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (out);


}
