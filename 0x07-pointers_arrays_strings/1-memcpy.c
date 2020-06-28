#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: dest
 *
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}

	return (dest);
}
