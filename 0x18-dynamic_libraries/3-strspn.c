#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: an input string to search
 * @accept: string
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	char *z = accept;

	while (*s)
	{
		y = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				x++;
				y = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = z;
		if (y == 0)
			break;
	}
	return (x);
}

