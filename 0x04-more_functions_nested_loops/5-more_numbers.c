#include "main.h"

/**
 * more numbers - print 0 to 14 ten times
 *
 * Return: return void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0 ; j <= 14; j++)
		
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
