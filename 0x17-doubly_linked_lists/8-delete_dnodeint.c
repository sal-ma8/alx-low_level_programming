#include "lists.h"

/**
 * delete_dnodeint_at_index - hfsgfkb
 * @head: vp1
 * @index: vp2
 * Return: iiii
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ha;
	dlistint_t *hs;
	unsigned int e;

	ha = *head;

	if (ha != NULL)
		while (ha->prev != NULL)
			ha = ha->prev;

	e = 0;

	while (ha != NULL)
	{
		if (e == index)
		{
			if (e == 0)
			{
				*head = ha->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hs->next = ha->next;

				if (ha->next != NULL)
					ha->next->prev = hs;
			}

			free(ha);
			return (1);
		}
		hs = ha;
		ha = ha->next;
		e++;
	}

	return (-1);
}
