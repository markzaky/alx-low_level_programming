#include <stdio.h>

/**
 * main - print if the alphabetsfrom a to z
 *
 * Description: using the main function
 * this program prints the alphabet from a to z
 * Return: 0
 */

int main(void)

{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

	putchar(ch);

	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)

	{

	putchar(ch);

	}

	putchar('\n');

	return (0);

}
