#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int number;
    struct Node* next;
};

void add_node(struct Node** head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->number = data;
    newNode->next = NULL;
    
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next= newNode;
}

void print_node(struct Node** head){
    struct Node* temp = *head;
    while (temp != NULL)
    {
        printf("%d ->", temp->number);
        temp=temp->next;
        
    }
    printf("NULL\n");
    
}


int main()
{
    struct Node* head = NULL;
    int number = 2;
    add_node(&head, number);
    add_node(&head, 3);
    add_node(&head, 4);
    add_node(&head, number);
    add_node(&head, number);
    printf("Linked List: ");
    print_node(&head);
    
    return 0;
}