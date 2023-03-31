#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int n, m, l;

	n = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (n < size)
	{
		m = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for (l = 0; l < 10; l++)
		{
			if (l < m)
				printf("%02x", *(b + n + l));
			else
				printf("  ");
			if (l % 2)
			{
				printf(" ");
			}
		}
		for (l = 0; l < m; l++)
		{
			int c = *(b + n + l);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		n += 10;
	}
}
