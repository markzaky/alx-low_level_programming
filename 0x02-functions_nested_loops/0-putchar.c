#include "main.h"
/**
 * main-program that prints '_putcha' on the screen
 * return:0
 */

int main(void)
{
	
	char putchar [8]= {'_','p','u','t','c','h','a','r'};
	
	unsigned int i;
	for (i=0; i < sizeof(putchar); i++)
	{
		
		_putchar(putchar[i]);
	}

	_putchar('\n');

	return (0);
}
