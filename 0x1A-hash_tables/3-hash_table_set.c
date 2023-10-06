#include "hash_tables.h"
/**
* hash_table_set - function name
* @ht: hash table
* @key: key
* @value: value
* Return: 1 on success and 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;

	hash_node_t *node;

	if (key == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!node)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value)
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
