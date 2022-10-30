#include <stdio.h>

/**
 * main- print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int n;
	
	for (n = 1; n <= 100; n++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", n);
	}
	printf('\n');

	return (0);
}
