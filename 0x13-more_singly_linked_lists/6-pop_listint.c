#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -Function prototype
 * Description: Deletes the head node of a linked list
 * @head: Pointer to pointer to head of list
 * Return: The value of the node that was removed or 0
 * if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (head == NULL)
		return (0);

	tmp = *head;

	if (tmp == NULL)
		return (0);

	ret = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (ret);
}
