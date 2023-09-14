#include "main.h"

/**
 * main - main function
 * @c:c - input parameter
 * void print_numbers(void); - print numbers
 *
 * Return: Return numbers
 */

void print_numbers(void);
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
