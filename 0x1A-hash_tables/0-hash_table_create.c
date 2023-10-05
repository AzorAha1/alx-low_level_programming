#include "hash_tables.h"
/**
 * hash_table_create - function name
 * @size: size
 * Description - creating hash table
 * Return: returns pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = NULL;
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(sizeof(hash_table_t) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		free(table->array[i]);
		table->array[i] = NULL;
	}
	return (table);
}
