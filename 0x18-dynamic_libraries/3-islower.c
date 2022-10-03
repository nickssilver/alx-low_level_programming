#include "main.h"
/**
 *  _islower - Check main
 * _islower: checks the character if lower_case
 * @c: An input character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char b;
	int lower = 0;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == c)
			lower = 1;
	}

	return (lower);
}
