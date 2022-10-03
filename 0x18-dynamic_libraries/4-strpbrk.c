#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *  @s: an input string
 *  @accept: an input character with to locate into string s
 *  Return: pointer to the byte in s that matches one of the bytes in accept,
 *  or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *z  = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = z;
		s++;
	}
	return (NULL);
}
