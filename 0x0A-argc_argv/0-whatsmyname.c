#include <stdio.h>
/**
 * main - prints the name of program.
 * @argc: number of command line argument.
 * @argv: array the program command line arguments.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
