#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printLinkedList(struct node *head);
void addNodeAtEnd(struct node *, int ele);
void addNodeAtIndex(struct node *, int ele, int index);
void updateNode(struct node *head, int ele, int index);


int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = NULL;
    printLinkedList(head);

    struct node *cur = (struct node *)malloc(sizeof(struct node));
    cur->data=10;
    cur->next=NULL;
    head->next=cur;
    printLinkedList(head);

    addNodeAtEnd(head, 15);
    addNodeAtEnd(head, 20);
    addNodeAtEnd(head, 25);
    addNodeAtEnd(head, 30);
    addNodeAtEnd(head, 35);
    printLinkedList(head);

    addNodeAtIndex(head, 22, 3);
    printLinkedList(head);


    return 0;
}

void printLinkedList(struct node *head){
    struct node *p = head;
    int len = 0;
    while(p!=NULL){
        printf("%d  ", p->data);
        len++;
        p = p->next;
    }
    printf("\n");
    printf("Length of the linked list is %d\n\n", len);
}

void addNodeAtEnd(struct node *head, int num){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next=NULL;
    if(head == NULL){
        head=newNode;
        return;
    }
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

void addNodeAtIndex(struct node *head, int num, int index){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data=num;
    newNode->next=NULL;

    if(index == 0){
        newNode->next = head;
        head=newNode;
        return;
    }
    int i=0;
    struct node *ptr = head;
    while(ptr!=NULL){
        if(i==index-1){
            break;
        }
        ptr=ptr->next;
        i++;
    }
    struct node *ptr2=ptr->next;
    ptr->next=newNode;
    newNode->next=ptr2;
}

void updateNode(struct node *head, int ele, int index){
    struct node *ptr = head;
    if(index==0){
        head->data=ele;
        return;
    }
    
}