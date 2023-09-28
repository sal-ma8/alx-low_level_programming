#include "lists.h"

/**
 * sum_dlistint - fundnlkkfnl
 * @head: hfxdbab
 * Return: sdfnln
 */
int sum_dlistint(dlistint_t *head)
{
	int ga = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			ga += head->n;
			head = head->next;
		}
	}

	return (ga);
}
