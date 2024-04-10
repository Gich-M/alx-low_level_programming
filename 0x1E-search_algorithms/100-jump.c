#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: The index where the value is found, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t left = 0;
    size_t right = step;
    size_t i;

    if (array == NULL || size == 0)
        return (-1);

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    for (i = left; i <= right && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}