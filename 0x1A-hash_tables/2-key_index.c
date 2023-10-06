#include "hash_tables.h"

/**
* key_index - fucntion name
* @key: key
* @size: size
* Return: returns the index which key should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
