#include "lists.h"

/**
 * insert_dnodeint_at_index - bjgcx
 * @h: jhhgch h jhl
 * @idx: ihjv  l
 * @n: dhfnjkfkldfcds
 * Return: jfvbfn fkdn
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *saa;
	dlistint_t *haa;
	unsigned int e;

	saa = NULL;
	if (idx == 0)
		saa = add_dnodeint(h, n);
	else
	{
		haa = *h;
		e = 1;
		if (haa != NULL)
			while (haa->prev != NULL)
				haa = haa->prev;
		while (haa != NULL)
		{
			if (e == idx)
			{
				if (haa->next == NULL)
					saa = add_dnodeint_end(h, n);
				else
				{
					saa = malloc(sizeof(dlistint_t));
					if (saa != NULL)
					{
						saa->n = n;
						saa->next = haa->next;
						saa->prev = haa;
						haa->next->prev = saa;
						haa->next = saa;
					}
				}
				break;
			}
			haa = haa->next;
			e++;
		}
	}

	return (saa);
}
