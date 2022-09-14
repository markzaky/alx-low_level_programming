#include "main.h"
/**
 * _islower - check if a character is lowecase
 * @c: is an int that will use for the argumnet
 * Return:1 if  char is lowe otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
