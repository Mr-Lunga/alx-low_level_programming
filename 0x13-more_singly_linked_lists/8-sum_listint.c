#include "lists.h"

/**
 * sum_listint - Function prototype
 * Description: Sums all the data (n) of a listint_t linked list.
 * @head: pointer to the first node of the list
 * Return: The sum of all the data (n) of a linked list
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int ret = 0;

	while (head != NULL)
	{
		ret += head->n;
		head = head->next;
	}

	return (ret);
}
