#include "main.h"
/**
 * _isalpha - function that checks if c is an alphabet letter
 * @c: used as argument fir function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
