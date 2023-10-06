#include "hash_tables.h"
/**
* hash_table_delete - delete hash table
* @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

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
	}
	free(ht->array);
	free(ht);
}
