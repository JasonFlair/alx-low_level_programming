#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: head.
 *
 * Return: returns nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
