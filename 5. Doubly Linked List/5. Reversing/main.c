#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*tail;

void init(){
    head=tail=NULL;
    struct node *new_node;
    for(int i=1;i<10;i++) {
        new_node = (struct node *) malloc(sizeof(struct node));
        new_node->next=new_node->prev=NULL;
        new_node->data=10*i;
        if(head==NULL){
            head=tail=new_node;
        }
        else{
            tail->next = new_node;
            new_node->prev=tail;
            tail=new_node;
        }
    }
}
void display(){
    struct node* temp;
    temp=head;
    printf("\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void reverse(){
    struct node *current_node, *next_node;
    next_node=NULL;
    current_node=head;
//    printf("%d",current_node->next->data);

    while(current_node!=NULL){
        next_node=current_node->next;
        current_node->next=current_node->prev;
        current_node->prev=next_node;
        current_node=next_node;
    }
    current_node=head;
    head=tail;
    tail=current_node;
}
int main() {
    printf("Initial list:");
    init();
    display();

    printf("List after reversing:");
    reverse();
    display();
    return 0;
}