#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data which is stored as temp_node.
 */
 int pop_listint(listint_t **head)
{
    listint_t *ptr, *temp;
    int temp_data;

    ptr = *head;

    if (ptr == NULL)
    {
        return 0;
    }
    else
    {
        ptr = *head;
        temp = ptr;
        ptr = ptr->next;
        temp_data = temp->n;
        free(temp);
        *head = ptr;

        return (temp_data);
    }
}
