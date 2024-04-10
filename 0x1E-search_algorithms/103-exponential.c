#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: The index where the value is found, or -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t i;

		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where the value is found, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound, left, right;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < (int)size - 1) ? bound : (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	return (binary_search(array, size, value));
}
