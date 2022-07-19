#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of the linked list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *ptr, *node;
    node = malloc(sizeof(listint_t));
    ptr = *head;
    node->n = n;
    node->next = NULL;
    if (node == NULL)
    {
        return (NULL);
    }
    if (idx == 0)
    {
        node->next = *head;
        *head = node;
    }
    else
    {
        for (int i = 0; i < idx - 1; i++)
        {
            ptr = ptr->next;
        }
        node->next = ptr->next;
        ptr->next = node; 
    }
}
