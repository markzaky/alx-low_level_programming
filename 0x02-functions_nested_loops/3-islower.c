#include "main.h"
/**
 * _islowe: check if a character is lowecase
 * Return:1 if  char is lowe otherwise return 0
 */
int _islowe(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
