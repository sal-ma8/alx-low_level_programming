#include "lists.h"

/**
 * dlistint_len - dhfbjhbcb hfjkvhdvkjs fjcn
 * @h: vp1
 * Return: tgdhh
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ed = 0;

	if (h == NULL)
		return (ed);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		ed++;
		h = h->next;
	}

	return (ed);
}
