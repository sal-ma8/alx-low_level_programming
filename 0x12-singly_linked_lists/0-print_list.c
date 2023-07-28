#include <stdio.h>
#include "lists.h"

/**
 * print_list - func1
 * @h:vp1
 * Return:num
 */
size_t print_list(const list_t *h)
{
	size_t sa = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sa++;
	}

	return (sa);
}
