#include "lists.h"
#include <stdlib.h>

/**
 * remove_loop - Finds the loop in a linked list and add NULL to end it
 * @head: Pointer to the head of the linked list
 * Return: void
 */
void remove_loop(listint_t *head)
{
	listint_t *tmp = head;
	listint_t *start;
	size_t i;
	size_t count = 0;

	while (tmp)
	{
		count++;
		start = head;
		i = 0;

		while (i < count)
		{
			if (start == tmp->next)
			{
				tmp->next = NULL;
				return;
			}

			start = start->next;
			i++;
		}

		tmp = tmp->next;
	}
}

/**
 * free_listint_safe Function prototype
 * Description: Frees a listint_t list
 * @h: Pointer to the head of the list
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t ret = 0;

	remove_loop(*h);

	while (h != NULL && *h != NULL)
	{
		ret++;
		tmp = *h;
		*h = tmp->next;
		free(tmp);
	}

	return (ret);
}
