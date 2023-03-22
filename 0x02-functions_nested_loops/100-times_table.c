#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: is greater than 15 or less than 0 the function should not print anything
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, cd;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				cd = a * b;
				_putchar(',');
				_putchar(' ');
				if (cd <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(cd + '0');
				}
				else if (cd <= 99)
				{
					_putchar(' ');
					_putchar((cd / 10) + '0');
					_putchar((cd % 10) + '0');
				}
				else
				{
					_putchar(((cd / 100) % 10) + '0');
					_putchar(((cd / 10) % 10) + '0');
					_putchar((cd % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
