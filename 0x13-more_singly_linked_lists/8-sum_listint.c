#include "lists.h"

/**
 * sum_listint - sum of all data (n) on a listint_t linked list
 * @head: pointer to first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
