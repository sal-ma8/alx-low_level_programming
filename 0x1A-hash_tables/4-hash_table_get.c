#include "hash_tables.h"
/**
* hash_table_get - gfhc
* @ht: vp1
* @key: vp2
* Return: ccharr
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *modo;
	unsigned long int fax;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || (strcmp(key, "") == 0))
		return (NULL);
	fax = (hash_djb2((const unsigned char *)key) % (ht->size));
	modo = ht->array[fax];

	while (modo)
	{
		if (strcmp(key, modo->key) == 0)
		{
			return (modo->value);
		}
		modo = modo->next;
	}
	return (NULL);
}
