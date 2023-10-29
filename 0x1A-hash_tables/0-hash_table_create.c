#include "hash_tables.h"
/**
* hash_table_create - wazifa
* @size: vp2
* Return: numb frome the same type pf this function
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *gadgdd;
	unsigned long int fah;

	if (size <= 0)
		return (NULL);
	gadgdd = malloc(sizeof(hash_table_t));
	if (gadgdd == NULL)
		return (NULL);
	gadgdd->array = malloc(sizeof(hash_node_t *) * size);
	if (gadgdd->array == NULL)
		return (NULL);
	gadgdd->size = size;
	for (fah = 0; fah < size; fah++)
		gadgdd->array[fah] = NULL;
	return (gadgdd);
}
