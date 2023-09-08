#include "hash_tables.h"

/**
 * hash_table_create - Entry.
 * Description: Function tha
 * @size: array
i * * Return: NULL.
 *pointer  to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size < j || !table)
		return (NULL);

	table->size = size;
	table->array = calloc((size_t)size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	for (j = 0; j < size; j++)
		table->array[j] = NULL;

	return (table);
}
