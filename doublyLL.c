#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void addNode(struct Node**, int);
void deleteNode(struct Node**, struct Node*);
void reverseDLL(struct Node**);
void printLL(struct Node*);

int main(){
    struct Node* head = NULL;
    addNode(&head, 10);
    printLL(head);
    addNode(&head, 21);
    printLL(head);
    addNode(&head, 32);
    printLL(head);
    addNode(&head, 43);
    printLL(head);
    addNode(&head, 54);
    printLL(head);
    reverseDLL(&head);
    printLL(head);
    struct Node* del = head;
    while(del->data!=32){
        del=del->next;
    }
    deleteNode(&head, del);
    printLL(head);
    reverseDLL(&head);
    printLL(head);
    return 0;
}

void reverseDLL(struct Node** start){
    struct Node* cur = *start;
    if(cur==NULL && cur->next==NULL){
        return;
    }
    while(cur->next!=NULL){
        struct Node* add = cur->next;
        cur->next = cur->prev;
        cur->prev = add;
        cur = add;
    }

    struct Node* add = cur->next;
    cur->next = cur->prev;
    cur->prev = add;
    *start = cur;
}

void deleteNode(struct Node** start, struct Node* del){
    struct Node* cur = *start;
    if(cur==NULL || del==NULL){
        return;
    }

    if(del->next!=NULL){
        del->next->prev = del->prev;
    }

    if(del->prev!=NULL){
        del->prev->next = del->next;
    }
    free(del);
}


void addNode(struct Node** start, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Memory allocation failed");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    struct Node* ptr = *start;
    if(*start == NULL){
        *start=newNode;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->prev = ptr;
}

void printLL(struct Node* start){
    struct Node* ptr = start;
    while(ptr!=NULL){
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}