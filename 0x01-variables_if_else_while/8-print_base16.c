#include <stdio.h>

/**
 * main - print numbers in base 16
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
