#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void addNode(struct Node**, int);

void printLL(struct Node*);

int main(){
    struct Node *head = NULL;
    addNode(&head, 10);
    addNode(&head, 40);
    addNode(&head, 60);
    addNode(&head, 70);
    printLL(head);
    return 0;
}

void addNode(struct Node** start, int data){
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if(*start == NULL){
        *start = newNode;
        printf("start -> data = %d", (*start)->data);
        return;
    } 

    struct Node *ptr = *start;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    } 
    ptr->next = newNode;
}

void printLL(struct Node* head){
    struct Node *ptr = head;
    printf("\n");
    while(ptr!=NULL){
        printf("%d  ", ptr->data);
        ptr=ptr->next;
    }
}