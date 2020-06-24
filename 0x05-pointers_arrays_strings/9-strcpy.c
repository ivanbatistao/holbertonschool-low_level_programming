#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src, including the null byte (\0)
 * @dest: pointer
 * @src: pointer
 * Return: (dest);
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}

	return (dest);
}
