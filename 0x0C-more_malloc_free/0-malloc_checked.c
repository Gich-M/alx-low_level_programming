#include "main.h"

/**
 * malloc_checked - Allocates memory
 *
 * @b: size to allocate
 *
 * Return: Return allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
