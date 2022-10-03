#include "main.h"
/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char x = 'A';
	int upper = 0;

	for (; x <= 'Z'; x++)
	{
		if (c == x)
		{
			upper = 1;
			break;
		}
	}

	return (upper);
}
