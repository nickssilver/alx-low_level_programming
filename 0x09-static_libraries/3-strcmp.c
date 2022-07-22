#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: char pointer variable
 * @s2: char pointer variable
 *
 * Return: an integer for the exit status
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
