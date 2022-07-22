#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: char variable pointer
 * @c: char variable pointer
 *
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
