#include "hash_tables.h"
/**
 * hash_table_print - prints the key:value from ht
 * @ht: pointer to table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int y = 0;
	hash_node_t  *buck;
	int not_fini = 0;

	if (!ht)
		return;

	printf("{");
	for (y = 0; y < ht->size; y++)
	{
		buck = ht->array[y];
		while (buck)
		{
			if (not_fini)
				printf(", ");
			printf("'%s': '%s'", buck->key, buck->value);
			not_fini = 1;
			buck = buck->next;
		}
	}
	printf("}\n");
}
