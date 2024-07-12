#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void displayStack(struct Node *);
void push(struct Node **cur, int data);
int pop(struct Node **cur);

int main(){
    struct Node *cur = NULL;
    push(&cur, 2);
    displayStack(cur);
    printf("\n");
    push(&cur, 4);
    displayStack(cur);
    printf("\n");
    push(&cur, 6);
    displayStack(cur);
    printf("\n");
    push(&cur, 8);
    displayStack(cur);
    printf("\n");
    int top = pop(&cur);
    displayStack(cur);
    return 0;
}

void displayStack(struct Node *cur){
    struct Node *ptr = cur;
    while(ptr!=NULL){
        printf("%d   ", ptr->data);
        ptr=ptr->next;
    }
}

void push(struct Node **cur, int data){
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode != NULL){
        newNode->data=data;
        newNode->next=*cur;
        *cur=newNode;
    }else{
        printf("\n Memory not allocated\n");
    }
}

int pop(struct Node **cur){
    struct Node *ptr = *cur;
    struct Node *topNode = ptr; 
    int top = topNode->data;
    ptr=ptr->next;
    *cur = ptr;
    free(topNode);
    return top;
}