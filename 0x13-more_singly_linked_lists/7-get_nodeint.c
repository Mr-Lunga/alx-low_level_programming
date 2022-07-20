#include "lists.h"

/**
 * get_nodeint_at_index - function prototype
 * Description: It returns the nth node of a listint_t linked list.
 * @head: Pointer to the first node of the list
 * @index: The index of the node
 * Return: The node at the given index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
