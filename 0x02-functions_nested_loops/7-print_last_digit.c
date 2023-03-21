#include "main.h"
/**
 * print_last_digit - print last digit
 * @l: number
 * Return: the value of last digit
 */
int print_last_digit(int l)
{
	int d = l % 10;

	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
