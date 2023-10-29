#include "hash_tables.h"
/**
* hash_table_print - gfhc
* @ht: vp1
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *harkdo;
	unsigned long int fa;
	int ha = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (fa = 0; fa < (ht->size); fa++)
	{
		harkdo = ht->array[fa];
		while (harkdo != NULL)
		{
			if (ha > 0)
				printf(", ");

			printf("\'%s\': \'%s\'", (harkdo->key), (harkdo->value));
			harkdo = harkdo->next;
			ha++;
		}
	}
	printf("}\n");
}
