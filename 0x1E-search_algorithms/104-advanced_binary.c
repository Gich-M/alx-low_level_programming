#include "search_algos.h"

/**
 * print_array - Prints a subarray of an array of integers
 * @array: Pointer to the first element of the array
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 */
static void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary - Searches for the first occurrence of a value
 * in a sorted array of integers using advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where the value is found, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		print_array(array, left, right);

		if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
			return (mid);

		if (array[mid] >= value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
