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

	return (0);
}
