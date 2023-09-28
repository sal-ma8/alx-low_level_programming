#include "lists.h"

/**
 * get_dnodeint_at_index - fdgb fb
 * @head: fsgfzdb
 * @index: sdfsg dsfg
 * Return: kfjlkfh
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m2as;
	dlistint_t *mo;

	m2as = 0;
	if (head == NULL)
	return (NULL);

	mo = head;
	while (mo)
	{
	if (index == m2as)
	return (mo);
	m2as++;
	mo = mo->next;
	}
	return (NULL);
}
