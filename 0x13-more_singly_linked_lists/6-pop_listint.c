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
