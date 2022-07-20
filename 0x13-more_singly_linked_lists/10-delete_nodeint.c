#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function prototype
 * Description: Deletes a node at a given posistion.
 * @head: Pointer to a pointer to the first node of linked list
 * @index: The index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node;
	listint_t *tmp;

	node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && node != NULL; i++)
		{
			node = node->next;
		}
	}

	if (node == NULL || (node->next == NULL && index != 0))
		return (-1);

	tmp = node->next;

	if (index != 0)
	{
		node->next = tmp->next;
		free(tmp);
	}
	else
	{
		free(node);
		*head = tmp;
	}

	return (1);
}
