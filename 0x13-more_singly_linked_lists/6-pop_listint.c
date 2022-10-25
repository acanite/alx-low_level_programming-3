#include "lists.h"

/**
 * pop_listint - Deletes the head  of a list.
 * @head: A pointer to the head of the list.
 * Return: if list is empty - 0 else head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
