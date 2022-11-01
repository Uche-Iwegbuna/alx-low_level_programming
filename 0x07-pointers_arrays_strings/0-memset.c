#include "main.h"

/**
 * *_memset - fill memory block with a value
 * *@s: adress to be filled
 * *@b: desired value
 * *@n: number of byte to be changed
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
