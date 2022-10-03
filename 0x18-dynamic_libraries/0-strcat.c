#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}
	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}

	return (dest);
}

