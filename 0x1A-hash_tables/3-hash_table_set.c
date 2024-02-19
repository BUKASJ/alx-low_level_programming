#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add/update the key/value pair to
 * @key: The key to add/update
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}


	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
