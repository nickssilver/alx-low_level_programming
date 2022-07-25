#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* strtow - splits a string into words.
* @str: string to be splitted
* Return: pointer to an array of strings (words) or null
**/

char **strtow(char *str)
{
	int i, j, k = 0, l, m, count = 0, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (i = 0; str[i] != '\0' &&  k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			words[k] = malloc((len + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				words[k][l] = str[i];
			words[k][l] = '\0', k++;
		}
	}
	words[k] = NULL;
	return (words);
}
