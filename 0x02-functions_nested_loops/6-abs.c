#include "main.h"
/**
 * _abs - a function that computes the absolute value
 * @n: Used as the variable
 * Return absolute value of n
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
