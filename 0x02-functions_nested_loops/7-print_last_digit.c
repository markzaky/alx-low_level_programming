#include "main.h"
/**
 * print_last_digit - prints the last digit of an intager
 * @c: integer used as variable
 * Return: last digit
 */
int print_last_digit(int c)
{
	if (c >0 || c ==0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar (c % 10 + '0');
		return (c %10)
	}
}
