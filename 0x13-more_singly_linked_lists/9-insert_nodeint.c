#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function prototype
 * Description: Inserts a new node at a given position.
 * @head: Pointer to a pointer to the first node of a linked list
 * @idx: Index of the list where the new node should be added
 * @n: The integer to add to the list
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = (listint_t *) malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->next = NULL;
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		(*head) = node;

		return (node);
	}

	tmp = *head;

	while (idx != 1)
	{
		tmp = tmp->next;
		--idx;

		if (tmp == NULL)
		{
			free(node);
			return (NULL);
		}
	}

	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
