#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int number;
    struct Node* previous;
    struct Node* next;
};

void add_node(struct Node** head, int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->number = data;
    newNode->next = NULL;
    newNode->previous = NULL;
    
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
    newNode->previous = temp;
}

void get_index(struct Node **head, int index){
    struct Node *temp = *head;
    int count = 0;
    if(temp == NULL){
        printf("List is empty\n");
    }

    while (temp != NULL && count < index)
    {
        temp = temp->next;
        count++;
        if (temp == NULL)
        {
            printf("No Node at this point\n");
            return;
        }
        
    }
    printf("Node at index %d has the value %d \n", count, temp->number);

}

void get_index_backward(struct Node **head, int index){
    struct Node *temp = *head;
    int count = 0;
    if(temp == NULL){
        printf("List is empty\n");
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
        
    }
    
    struct Node *last = temp;
    while (last != NULL && count < index)
    {
        last = last->previous;
        count++;
        
    }
    if (last == NULL)
    {
        printf("No Node at this point\n");
        return;
    }
    printf("Node at index %d has the value %d \n", count, last->number);
    
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
    get_index(&head, 0);
    get_index_backward(&head, 2);
    
    return 0;
}