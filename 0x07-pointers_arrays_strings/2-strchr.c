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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);

		i++;
	}

	if (c == '\0')
		return (0);

	else
		return (0);

}
