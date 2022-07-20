#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function prototype
 * Description: Prints the value of each node in the list
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ret++;
	}
	return (ret);
}
