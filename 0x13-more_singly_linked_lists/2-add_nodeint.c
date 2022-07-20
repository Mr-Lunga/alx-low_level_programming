#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -Function prototype
 * Description: Add a new node at the beginning of a listint_t list.
 * @head: Pointer to pointer to head of list
 * @n: The integer to add to the list
 * Return: The address of the new element or NULL if there
 * are errors
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_int = (listint_t *) malloc(sizeof(listint_t));

	if (list_int == NULL)
		return (NULL);

	list_int->n = n;
	list_int->next = *head;

	*head = list_int;

	return (*head);
}
