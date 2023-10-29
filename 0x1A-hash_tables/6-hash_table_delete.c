#include "hash_tables.h"
/**
* hash_table_delete - jfkjjfnjbv
* @ht: vp1
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hark, *mo;
	unsigned long int fa;

	if (ht == NULL)
		return;

	for (fa = 0; fa < (ht->size); fa++)
	{
		hark = ht->array[fa];
		while (hark != NULL)
		{
			mo = hark->next;
			if (hark->key != NULL)
				free(hark->key);
			if (hark->value != NULL)
				free(hark->value);
			if (hark != NULL)
				free(hark);
			hark = mo;
		}
	}
	free(ht->array);
	free(ht);
}
