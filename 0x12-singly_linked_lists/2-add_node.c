#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - func1
 * @head: vp1
 * @str: vp2
 * Return: num
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *s_else;
	unsigned int sal = 0;

	while (str[sal])
		sal++;

	s_else = malloc(sizeof(list_t));
	if (!sal)
		return (NULL);

	s_else->str = strdup(str);
	s_else->len = sal;
	s_else->next = (*head);
	(*head) = s_else;

	return (*head);
}
