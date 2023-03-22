#include <stdio.h>

/**
 * main - print the first 100 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, c;
	int d;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (d = 0; d < 48; d++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
