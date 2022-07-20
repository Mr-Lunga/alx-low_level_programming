#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Function prototype
 * Description: Prints a listint_t linked list
 * @head: Pointer to the first node of the list
 * Return: The number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	const listint_t *start;

	size_t count = 0;
	size_t i;

	while (tmp)
	{
		printf("[%p]%d\n", (void *)tmp, tmp->n);

		count++;
		tmp = tmp->next;
		start = head;
		i = 0;

		while (i < count)
		{
			if (start != tmp)
			{
				start = start->next;
				i++;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)start, start->n);
					return (count);
			}
		}
	}
	return (count);
}
