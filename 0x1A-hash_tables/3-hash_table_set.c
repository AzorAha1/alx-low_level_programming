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

	hash_node_t *node, *checker;

	node = NULL;
	if (key == NULL || ht)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[index];

	while (checker != NULL)
	{
		if (strcmp(checker->key, key) == 0)
		{
			free(checker->value);
			checker->value = strdup(value);
			return (1);
		}
		checker = checker->next;
	}
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
