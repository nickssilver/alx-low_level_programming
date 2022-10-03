#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compares two strings.
 * @s1: input parameter
 * @s2: input parameter
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
