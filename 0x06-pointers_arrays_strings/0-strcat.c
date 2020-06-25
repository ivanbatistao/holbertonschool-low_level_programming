#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: p - dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}

	return (p);

}
