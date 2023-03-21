#include "main.h"
/**
 * print_sign - Entry point
 * @n: is a number
 * Return: 1 if n > 0 ,-1 if n == 0,-1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
