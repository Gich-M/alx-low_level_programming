#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 times the alphabet
 *
 * Return - void
 */
void print_alphabet_x10(void);
{
	char i;

	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
