#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 *
 * @c: character to print
 *
 * Return: 1 for success & -1 for error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
