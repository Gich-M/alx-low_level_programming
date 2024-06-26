#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using the interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: The index where the value is found, or -1 if not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high]
						- array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
