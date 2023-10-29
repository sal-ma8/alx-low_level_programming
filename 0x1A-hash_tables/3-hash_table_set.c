#include "hash_tables.h"
/**
* hash_table_set - sfsg
* @ht: vp1
* @key: vp2
* @value: vp3
* Return: 1 Success, 0 Fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *doged, *modo;
	unsigned long int fx;

	if (ht == NULL)
		return (0);
	fx = (hash_djb2((const unsigned char *)key) % (ht->size));
	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (0);
	if (ht->array[fx] == NULL)
	{doged = malloc(sizeof(hash_node_t));
		if (doged == NULL)
			return (0);
		ht->array[fx] = doged;
		doged->key = (strdup(key));
		doged->value = (strdup(value));
		doged->next = NULL;
		return (1);
	}
	modo = ht->array[fx];
	while (modo)
	{
		if (strcmp(key, modo->key) == 0)
		{free(modo->value);
			modo->value = (strdup(value));
			return (1);
		}
		modo = modo->next;
	}
	modo = ht->array[fx];
	while (modo)
	{doged = malloc(sizeof(hash_node_t));
		if (doged == NULL)
			return (0);
		ht->array[fx] = doged;
		doged->key = (strdup(key));
		doged->value = (strdup(value));
		doged->next = modo, ht->array[fx] = doged;
		return (1);
	}
	return (0);
}
