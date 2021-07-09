

void remove(Node **head, int key)
{
    Node *cur = *prev = *head;
    if (cur == NULL)
        return


    if (cur->data == key) {
        free(temp);
        *head = NULL;
        return;
    }

    cur = (*head)->next;
    prev = *head;

    while (cur != NULL) {
        if (cur->data == key) {
            prev->next = cur->next;
            free(cur);
            return;
        }
        prev = cur;
        cur = cur->next;
    }
}
