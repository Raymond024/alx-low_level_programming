#include "hash_tables.h"
/**
 * hash_table_get - retrieve value associeted with key
 * @ht: pointer to table
 * @key: key to retrive value
 * Return: value or NULL if key does not exit.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t  *buck;

	if (!ht || !key || !*key)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	buck = ht->array[ind];

	while (buck)
	{
		if (!strcmp(key, buck->key))
			return (buck->value);
		buck = buck->next;
	}
	return (NULL);
}
