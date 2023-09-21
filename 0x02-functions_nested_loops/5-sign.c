#include "main.h"

/**
 * print_sign - function prints sign of a number
 * @n: parameter to be checked
 * Return: 1 for (n > 0) 0 for (n == 0) and -1 for (n < 0)
 * _putchar: prints corresponding return types as + , 0 or -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
