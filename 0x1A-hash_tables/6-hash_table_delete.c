#include "hash_tables.h"
/**
 * hash_table_delete - function free hash table and all nodes
 * @ht: pointer to table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *buck, *aux;
	unsigned long int y = 0;

	if (!ht)
		return;

	for (y = 0; y < ht->size; y++)
	{
		buck = ht->array[y];
		while (buck)
		{
			aux = buck;
			buck = buck->next;
			if (aux->key)
				free(aux->key);
			if (aux->value)
				free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
