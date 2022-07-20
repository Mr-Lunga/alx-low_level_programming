#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function prototype
 * Description: frees the memory allocated for the listint_t list
 * @head: Pointer to the first node in the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
