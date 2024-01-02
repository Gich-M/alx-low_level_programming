#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: index of a key
 * @value: value associated with the key
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
