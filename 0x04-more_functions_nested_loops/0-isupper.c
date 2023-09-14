#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @c:c - input parameter
 * int _isupper(int c) - checks for uppercase character
 *
 * Return: Always return 0.
 */

int _isupper(int c);
{

	if ((c >= '65') && (c >= '90') || (c >= '95') && (c >= '120'))
		return (1);
	else
		return (0);

}
