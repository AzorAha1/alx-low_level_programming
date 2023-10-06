#include "hash_tables.h"
/**
* hash_table_delete - delete hash table
* @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *checker;

		checker = ht->array[i];
		while (checker)
		{
			hash_node_t *temp = checker;

			checker = checker->next;
			free(temp);
		}
		ht->array[i] = NULL;
		ht->size = 0;
	}
	free(ht->array);
	free(ht);
}
