#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	digit1 = 48;
	digit2 = 49;
	digit3 = 50;
	while  ((digit1 < 56) && (digit2 < 57) && (digit3 < 58))
	{
		putchar(digit1);
		putchar(digit2);
		putchar(digit3);
		if ((digit1 == 55) && (digit2 == 56) && (digit3 == 57))
		{
			putchar('\n');
			digit1++;
			digit2++;
			digit3++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (digit3 < 57)
			{
				digit3++;
			}
			else if ((digit2 < 56) && (digit3 == 57))
			{
				digit3 = 1 + ++digit2;
			}
			else
			{
				digit2 = 1 + ++digit1;
				digit3 = 1 + digit2;
			}
		}
	}
	return (0);
}

