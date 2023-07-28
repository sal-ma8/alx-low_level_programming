#include <stdlib.h>
#include "lists.h"

/**
 * list_len - func1
 * @h: vp1
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t sa = 0;

	while (h)
	{
		sa++;
		h = h->next;
	}
	return (sa);
}
