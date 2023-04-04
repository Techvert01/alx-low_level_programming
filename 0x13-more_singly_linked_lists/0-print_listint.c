#include "lists.h"
#include <studio.h>

/**
 * print_listint -prints all the elements of a listint_t
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
 size_t print_listint(const listint_t *h)
 {
	 size_t count = 0;
	 while (h != Null)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	 return (count);
 }
