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

	printf("{");
	comma = 0;
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *checker = ht->array[i];

		if (!checker)
		{
			continue;
		}
		if (comma == 1)
		{
			printf(", ");
		}
		while (checker)
		{
			printf("'%s' : '%s'", checker->key, checker->value);
			comma = 1;
			checker = checker->next;
		}
	}
	printf("}\n");
}
