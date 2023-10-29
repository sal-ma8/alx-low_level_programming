#include "hash_tables.h"
/**
* key_index - dfd
* @key: vp1
* @size: vp2
* Return: numberr
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
