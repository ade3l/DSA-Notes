#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node *head,*tail;
void create(){
    head=NULL;
    struct node *new_node;
    for(int i=1;i<=9;i++) {
        new_node = (struct node *) malloc(sizeof(struct node));
        new_node->next = new_node->prev = NULL;
        new_node->data=10*i;
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("\n");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertAtBegg(){
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->next = new_node->prev = NULL;
    new_node->data=0;
    head->prev=new_node;
    new_node->next=head;
    head=new_node;
}

void insertAtEnd(){
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->next = new_node->prev = NULL;
    new_node->data=100;
    tail->next = new_node;
    new_node->prev=tail;
    tail=new_node;
}

void insertAtPos(){
    struct node *new_node,*temp;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->next = new_node->prev = NULL;
    new_node->data=35;
    temp=head;
    int pos=5,i=1;
    //This is the bare bones method to do it
    //we can add a check to make sure position is not invalid
    //we can also call insert at beginning or insert at end directly, depending on the position
    //This function cannot insert at the beginning or at the end. Only in between it
    //So make sure to write proper checks for it

    //IMPORTANT: if we want to write a function called insertAfterPos() then use i<pos instead of i<pos-1
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    new_node->next=temp->next;
    new_node->prev=temp;
    temp->next=new_node;
    temp=new_node->next;
    temp->prev=new_node;
}

int main() {
    create();
    printf("The initial list");
    display();
    printf("List after inserting 0 at the beginning:");
    insertAtBegg();
    display();
    printf("list after inserting 100 at the end is:");
    insertAtEnd();
    display();
    printf("list after inserting 35 at position 5 is:");
    insertAtPos();
    display();
    return 0;
}
