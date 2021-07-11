#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node * next;
    int data;
}NODE;

NODE *head = NULL;




void add(NODE **head, int data)
{
    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    if (new_node == NULL)
        return;

    new_node->next = *head;
    new_node->data = data;
    *head = new_node;
    return;
}

void dump_list(NODE **head)
{
    NODE *temp = *head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    add(&head, 10);
    add(&head, 20);
    add(&head, 30);
    add(&head, 32);
    add(&head, 34);
    add(&head, 21);
    dump_list(&head);
    return 0;

}
