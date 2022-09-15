#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: an int used as the varriable
 * Return: 1 and prints if positive and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0')
	return (0):
	}
}
