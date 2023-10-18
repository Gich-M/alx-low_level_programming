#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line
 * Descripton: prints lines
 * @n: number of lines to prnt (parameter)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
