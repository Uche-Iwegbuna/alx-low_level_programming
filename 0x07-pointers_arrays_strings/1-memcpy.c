#include "main.h"
/**
 * *_memcpy - functions copies memory area
 * @deat: memory source
 * @src: memory destination
 * @n: number of bytes
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
