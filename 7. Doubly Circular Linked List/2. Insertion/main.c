#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
}*head,*tail;

void init(){
    head=tail=NULL;
    struct node *new_node;
    for(int i=1;i<10;i++) {
        new_node=(struct node *) malloc(sizeof (struct node));
        new_node->data=10*i;
        if (head == NULL) {
            head = tail = new_node;
            new_node->next = new_node->prev = new_node;
        } else {
            new_node->prev = tail;
            new_node->next = head;
            head->prev = new_node;
            tail->next = new_node;
            tail = new_node;
        }
    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("\n");
    if(head==NULL){
        printf("List is empty");
    }
    else{
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        }while(temp!=head);
    }
    printf("\n");
}
void insertAtBeg(){
    if(head==NULL){
        printf("the list is empty");
    }
    else{
        struct node *new_node;
        new_node=(struct node *) malloc(sizeof (struct node));
        new_node->data=0;//this part can be taken as input from the user
        new_node->next=head;
        new_node->prev=tail;
        head->prev=new_node;
        tail->next=new_node;
        head=new_node;
    }
}

void insertAtEnd(){
    if(head==NULL){
        printf("the list is empty");
    }
    else{
        struct node *new_node;
        new_node=(struct node *) malloc(sizeof (struct node));
        new_node->data=100;//this part can be taken as input from the user
        new_node->next=head;
        new_node->prev=tail;
        head->prev=new_node;
        tail->next=new_node;
        tail=new_node;
        //inserting at the end is literally the same as inserting at the beginning
        //only difference is that when inserting at the beginning head is moved and when at the end tail is moved
    }
}
int main() {
    printf("The initial list is");
    init();
    display();

    printf("The list after inserting 0 in the beginning");
    insertAtBeg();
    display();

    printf("The list after inserting 100 at the end");
    insertAtEnd();
    display();
    return 0;
}
