#include "main.h"

/**
 * _strlen - function that returns the lenght of a string.
 *
 * @s: char type variable
 *
 * Return: string length of a given string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
