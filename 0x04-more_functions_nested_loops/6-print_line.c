#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a line on the terminal
 * @n: number of times to print (_)
 * Return: void
 */
void print_line(int n)
{int i;

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
