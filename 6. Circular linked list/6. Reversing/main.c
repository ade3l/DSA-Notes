#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*tail;

//We will be using a CLL with only a tail
//CLL with head can be done in the same way as a normal LL is done

void init(){
    tail=NULL;
    struct node *new_node;
    for(int i=1;i<=10;i++){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->next=NULL;
        new_node->data=10*i;
        if(tail==NULL){
            tail=new_node;
            new_node->next=tail;
        }
        else{
            new_node->next=tail->next;
            tail->next=new_node;
            tail=new_node;
        }
    }
}
void reverse(){
    struct node *previous,*current,*next;
    current=tail->next;
    next=current->next;
    //add check to see if its a single element list or not
    while(current!=tail){
        previous=current;
        current=next;
        next=current->next;
        current->next=previous;
    }
    //loop will end with next node at the first node and current at the last node
    // now make the first node point to the last node and move the tail and hence completing the reversing
    next->next=current;
    tail=next;
}
void display(){
    struct node *temp;
    temp=tail->next;
    printf("\n");
    do{
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=tail->next);
    printf("\n");
}
int main() {
    init();
    printf("The intial list is:");
    display();
    printf("The list after reversing is:");
    reverse();
    display();
    return 0;
}
