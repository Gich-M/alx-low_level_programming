#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @left: Starting index of the subarray
 * @right: Ending index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%d, ", array[i]);
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: The index where the value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	print_array(array, left, right);

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;

		print_array(array, left, right);
	}

	return (-1);
}
