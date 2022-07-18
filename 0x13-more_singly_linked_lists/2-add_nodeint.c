#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of the linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr;
    ptr = malloc(sizeof(listint_t));
    ptr->n = n;
    
    if (ptr == NULL)
    {
        return(NULL);
    }
    ptr->next = *head;
    *head = ptr;

    return (*head);
}
