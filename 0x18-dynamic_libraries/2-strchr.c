#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
