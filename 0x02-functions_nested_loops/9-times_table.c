#include "main.h"
#include <stdio.h>

/**
 * times_table -  prints the 9 times table
 * Return: no return
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = j * i;
			if (n < 9)
			{
				_putchar(n + 48);
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}