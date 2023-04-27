#include <stdio.h>

void Tortoise(void) __attribute__ ((constructor));

/**
  * Tortoise - first function before main.
  * Return: Nothing.
  */
void Tortoise(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");

}
