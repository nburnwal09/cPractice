#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node{
    int data;
    struct Node* next;
};

void printLL(struct Node*);
void addNodeHead(struct Node**, int data);
void addNodeMiddle(struct Node**, int data);
void addNodeLast(struct Node**, int data);
void reverse(struct Node**);
void isLoop(struct Node*, int loop);
void findSmallest(struct Node*, int *ans);
void sortLL(struct Node**);


int main(){
    struct Node* head = NULL;
    addNodeLast(&head, 10);
    addNodeLast(&head, 20);
    addNodeLast(&head, 5);
    addNodeLast(&head, 7);
    addNodeMiddle(&head, 30);
    addNodeMiddle(&head, 38);
    addNodeMiddle(&head, 34);

    printLL(head);
    printf("\n");

    reverse(&head);
    printLL(head);
    printf("\n");
    addNodeHead(&head, 1);
    addNodeHead(&head, 6);
    addNodeHead(&head, 8);
    printLL(head);
    printf("\n");
    int smallestNum = INT_MAX;
    findSmallest(head, &smallestNum);
    printf("Smallest element = %d", smallestNum);
    
    sortLL(&head);
    printLL(head);
    return 0;
}

void sortLL(struct Node** start){
    struct Node* cur = (*start);
    while(cur->next!=NULL){
        struct Node* ptr = cur->next;
        struct Node* temp;
        while(ptr!=NULL){
            if(ptr->data<cur->data){
                temp = ptr->next;
                ptr->next = cur;
                cur->next = temp;
                cur = ptr;
                ptr = temp;
            }else{
                ptr = ptr->next;
            }
        }
        cur = cur->next;
    }
}

void findSmallest(struct Node* start, int* ans){
    while (start!=NULL)
    {
        if(start->data< (*ans)){
            (*ans) = start->data;
        }
        start = start->next;
    }
}

void reverse(struct Node** start){
    struct Node* f = NULL;
    struct Node* now = (*start);
    struct Node* l = (*start)->next;
    while(now!=NULL && l!=NULL){
        now->next = f;
        f = now;
        now = l;
        l = l->next;
    }
    now->next = f;
    (*start) = now;
    
}

void addNodeHead(struct Node** start, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Memory allocation failed");
        exit(0);
    }
    temp->data = data;
    temp->next=NULL;
    if((*start)==NULL){
        (*start) = temp;
        return;
    }

    temp->next = (*start);
    (*start) = temp;
}

void addNodeMiddle(struct Node** start, int data){
    struct Node* f = *start;
    struct Node* s = *start;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Memory allocation failed");
        exit(0);
    }
    temp->data = data;
    temp->next = NULL;
    if((*start)==NULL){
        (*start) = temp;
        return;
    }

    while(f!=NULL && f->next!=NULL){
        f = f->next->next;
        if(f!=NULL){
            s = s->next;
        }
    }
    struct Node* ptr = s->next;
    s->next = temp;
    temp->next = ptr;
}

void addNodeLast(struct Node** start, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Memory allocation failed");
        exit(0);
    }
    temp->data = data;
    temp->next = NULL;
    if(*start == NULL){
        (*start) = temp;
        return;
    }
    struct Node* ptr = *start;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void printLL(struct Node* start){
    while(start != NULL){
        printf("%d  ", start->data);
        start = start->next;
    }
}