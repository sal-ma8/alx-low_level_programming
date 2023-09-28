#include <stdio.h>
#include "lists.h"

/**
 * print_list - cndjfh djdv 
 * @h: vp1
 * Return: jdfjdjc
 */
size_t print_list(const list_t *h)
{
 size_t sal = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 sal++;
 }

 return (sal);
}
