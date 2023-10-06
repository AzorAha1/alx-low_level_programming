#include "hash_tables.h"
/**
* hash_table_get - function name
* @ht: hash table to look into
* @key: key youre looking for
* Return: returns the value or null if not key not found_
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	hash_node_t *checker;

	index = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[index];
	if (!checker)
	{
		return (NULL);
	}
	while (checker != NULL)
	{
		if (strcmp(checker->key, key) == 0)
		{
			return (checker->value);
		}
		checker = checker->next;
	}
	return (NULL);
}
