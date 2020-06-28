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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}

	if (c == NULL)
	{
		return (0);
	}

	else
	{
		return (NULL);
	}
}
