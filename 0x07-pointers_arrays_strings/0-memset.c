#include "main.h"

/**
 * *_memset - fill memory block with a value
 * *@s: adress to be filled
 * *@b: desired value
 * *@n: number of byte to be changed
 * Return: change array of n bytes with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
