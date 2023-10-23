#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != ('\0') ; i++)
	{
		j++;
	}
	for (i = j - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
