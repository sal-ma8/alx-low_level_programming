#include "lists.h"

/**
 * add_dnodeint - dfcsfvrg rfg
 * @head: vp2
 * @n: vp1
 * Return: dsf efr
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *salm;
	dlistint_t *hat;

	salm = malloc(sizeof(dlistint_t));
	if (salm == NULL)
		return (NULL);

	salm->n = n;
	salm->prev = NULL;
	hat = *head;

	if (hat != NULL)
	{
		while (hat->prev != NULL)
			hat = hat->prev;
	}

	salm->next = hat;

	if (hat != NULL)
		hat->prev = salm;

	*head = salm;

	return (salm);
}
