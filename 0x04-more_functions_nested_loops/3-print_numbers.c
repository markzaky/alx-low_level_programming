#include "main.c"

/**
 * print_numbers - prints the numbers from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}