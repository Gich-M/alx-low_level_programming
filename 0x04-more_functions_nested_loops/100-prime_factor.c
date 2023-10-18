#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: void
 */

int main(void)
{
	long number = 612852475143;
	long largest_prime = -1;

	while (number % 2 == 0)
	{
		largest_prime = 2;
		number = number / 2;
	}

	for (long i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number = number / i;
		}
	}

	if (number > 2)
	{
		largest_prime = number;
	}

	printf("%ld\n", largest_prime);
	return (0);
}
