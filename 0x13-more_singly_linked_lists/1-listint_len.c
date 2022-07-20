#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function prototype
 * Description: Gets the nuber of elements in a linked
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		h = h->next;
		ret++;
	}
	return (ret);
}
