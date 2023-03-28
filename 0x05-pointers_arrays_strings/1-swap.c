#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a: add value of a
 *@b: add value of b
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
