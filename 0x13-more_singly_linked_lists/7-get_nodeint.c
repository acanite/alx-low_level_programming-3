#include "lists.h"

/**
 * get_nodeint_at_index - Gets a given node of a linked list
 * @head: Pointer to head of list.
 * @index: Index of node to locate.
 * Return: The located node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
