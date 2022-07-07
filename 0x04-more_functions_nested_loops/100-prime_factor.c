#include <stdio.h>

/**
 * main - prints largest prime factor of the number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
