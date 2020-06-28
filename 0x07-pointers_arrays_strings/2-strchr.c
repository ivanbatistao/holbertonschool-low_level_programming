#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: variable
 * Return: 0
 *
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (0);

	else
		return (0);

}
