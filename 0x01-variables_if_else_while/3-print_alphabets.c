#include <stdio.h>
/**
  * main - entry block
  * Description: a program that prints the alphabet in lowercase, and then in uppercase
  * Return: 0
**/
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
