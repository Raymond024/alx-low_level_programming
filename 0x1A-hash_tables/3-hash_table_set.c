#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to table
 * @key: key
 * @value: value to add the element
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	char *vc, *kc;
	hash_node_t  *buck, *new_n;

	if (!ht || !key || !*key || !value)
		return (0);
	vc = strdup(value);
	if (!vc)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	buck = ht->array[ind];

	while (buck)
	{
		if (!strcmp(key, buck->key))
		{
			free(buck->value);
			buck->value = vc;
			return (1);
		}
		buck = buck->next;
	}
	new_n = calloc(1, sizeof(hash_node_t));
	if (new_n == NULL)
	{
		free(vc);
		return (0);
	}
	kc = strdup(key);
	if (!kc)
		return (0);
	new_n->key = kc;
	new_n->value = vc;
	new_n->next = ht->array[ind];
	ht->array[ind] = new_n;
	return (1);
}
