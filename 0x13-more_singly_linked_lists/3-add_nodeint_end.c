#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node, *ptr;
    node = malloc(sizeof(listint_t));

    ptr = *head;
    node->n = n;
    node->next = NULL;

    if (ptr == NULL)
    {
        *head = node;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = node;
    }
    return (*head);
}
