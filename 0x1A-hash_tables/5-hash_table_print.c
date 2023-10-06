#include "hash_tables.h"
/**
* hash_table_print - function name
* @ht: hashtable
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	int comma;

	comma = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *checker = ht->array[i];

		if (!checker)
		{
			continue;
		}
		while (checker)
		{
			if (comma == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", checker->key, checker->value);
			comma = 1;
			checker = checker->next;
		}
	}
	printf("}\n");
}
