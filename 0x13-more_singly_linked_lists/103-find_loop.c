#include "lists.h"

/**
 * find_listint_loop -Function prototype
 * Description: Finds the loop in a linked list.
 * @head: Pointer to the head of the list
 * Return: The address of the node wher he loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *start;
	size_t i, ret;

	ret = 0;
	tmp = head;

	while (tmp)
	{
		ret++;
		tmp = tmp->next;
		start = head;
		i = 0;

		while (i < ret)
		{
			if (start != tmp)
			{
				start = start->next;
				i++;
			}
			else
				return (start);
		}
	}
	return (NULL);
}
