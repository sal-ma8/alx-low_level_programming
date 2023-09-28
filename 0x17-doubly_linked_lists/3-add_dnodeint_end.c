#include "lists.h"

/**
 * add_dnodeint_end - y gfexkwhc g chj
 * @head: dfyr hn
 * @n: sdjdf hdhf 
 * Return: bcdgj 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *haa;
	dlistint_t *saa;

	saa = malloc(sizeof(dlistint_t));
	if (saa == NULL)
		return (NULL);

	saa->n = n;
	saa->next = NULL;

	haa = *head;

	if (haa != NULL)
	{
		while (haa->next != NULL)
			haa = haa->next;
		haa->next = saa;
	}
	else
	{
		*head = saa;
	}

	saa->prev = haa;

	return (saa);
}
