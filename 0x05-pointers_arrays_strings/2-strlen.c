#include "main.h"

/**
 * _strlen -a function that returns the lengt of a string
 * @c: pointer to the string varriable
 *
 * Return: the legth of string c
 */

int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;
return (i);
}
