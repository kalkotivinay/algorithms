#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node * next;
    int data;
}NODE;

NODE *head = NULL;




void add_first(NODE **head, int data)
{
    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    if (new_node == NULL)
        return;

    new_node->next = *head;
    new_node->data = data;
    *head = new_node;
    return;
}

void add_last(NODE **head, int data)
{
    NODE **tracer = head;
    printf("head %p, tracer %p, *tracer %p\n", head, tracer, *tracer);
    NODE *new_node = (NODE *)malloc(sizeof(NODE));
    if (new_node == NULL)
        return;
    
    while (*tracer) {
        tracer = &(*tracer)->next;
    }
    printf("head %p, tracer %p, *tracer %p\n", head, tracer, *tracer);
    new_node->next = *tracer;
    printf("new_node ptr %p\n", new_node);
    printf("head %p, tracer %p, *tracer %p\n", head, tracer, *tracer);
    new_node->data = data;
    *tracer = new_node;
    printf("head %p, tracer %p, *tracer %p\n", head, tracer, *tracer);
    printf("============================\n");
    return;
}

void dump_list(NODE **head)
{
    NODE *temp = *head;
    while (temp != NULL) {
        printf("data = %d, ptr = %p\n", temp->data, temp);
        temp = temp->next;
    }
}

int main()
{
/*
    add_first(&head, 10);
    add_first(&head, 20);
    add_first(&head, 30);
    add_first(&head, 32);
    add_first(&head, 34);
    add_first(&head, 21);
*/

    add_last(&head, 10);
    add_last(&head, 20);
    add_last(&head, 30);
    //add_last(&head, 32);
    //add_last(&head, 34);
    //add_last(&head, 21);
    printf("head %p, &head %p\n", head, &head);
    dump_list(&head);
    return 0;

}
