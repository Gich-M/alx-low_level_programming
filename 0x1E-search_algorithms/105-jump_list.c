#include "search_algos.h"


listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    listint_t *prev = list;
    listint_t *current = list;

    if (list == NULL)
        return (NULL);

    while (current->index < size && current->n < value) 
    {
	    size_t i;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        prev = current;
        for (i = 0; i < step && current->next != NULL; i++)
            current = current->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev->index <= current->index && prev->n <= value) {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return (NULL);
}

