#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string of chars
 * @s2: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	unsigned int i, j;
	char *str_copy;
	char *tmp1 = s1;
	char *tmp2 = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*s1++)
		i++;
	len1 = i;
	s1 = tmp1;

	i = 0;
	while (*s2++)
		i++;
	len2 = i;
	s2 = tmp2;

	str_copy = malloc((len1 + len2) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	j = 0;
	while (j < len1)
	{
		str_copy[j] = s1[j];
		j++;
	}
	while (j < len1 + len2)
	{
		str_copy[j] = s2[j - len1];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}
