#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function prototype
 * Description: Adds a new node at the end of a listint_t list
 * @head: Pointer to pointer to head of list
 * @n: The integer to add to the list
 * Return: The address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *list_int;

	while (tmp && tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	list_int = (listint_t *) malloc(sizeof(listint_t));

	if (list_int == NULL)
		return (NULL);

	list_int->n = n;
	list_int->next = NULL;

	if (tmp)
		tmp->next = list_int;
	else
		*head = list_int;

	return (list_int);
}
