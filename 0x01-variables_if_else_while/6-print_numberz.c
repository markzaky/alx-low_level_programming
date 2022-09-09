#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the main function
 * this program prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)

{

	int c;

	for (c = 0; c <= 9; c++)

	{

	putchar(c + '0');

	}

	putchar('\n');

	return (0);

}
