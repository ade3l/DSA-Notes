#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*new_node;

void display(){
    temp=head;
    printf("\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void deleteFromBeg(){
    temp=head;
    if(temp!=NULL){
        head=head->next;
        free(temp);
    }

}

void deleteFromEnd(){
    struct node *prevnode;
    temp=head;
    while(temp->next!=NULL){
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
        head=NULL;
    else
        prevnode->next=NULL;
    free(temp);
}

void deleteFromPos(){
    if(head==NULL) {
        printf("\nList is empty\n");
    }
    else{
        struct node *nextnode;
        //I am taking position as 3 for now
        //You can take it as an input and add checks to make sure that it is a valid input
        int pos=3,i=1;
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
}
void init(){
    //You can get the list input if you want. I will just initialise it at compile time for simplicity's sake
    head=NULL;
    for(int i=1;i<=6;i++){
        new_node=(struct node *) malloc(sizeof(struct node));
        new_node->data=10*i;
        if(head==NULL){
            head=temp=new_node;
        }
        else{
            temp->next=new_node;
            temp=new_node;
            temp->next=NULL;
        }
    }
    printf("The starting list is:");
    display();
}

int main() {
    init();

    printf("\nList after deleting from beginning is:");
    deleteFromBeg();
    display();

    printf("\nList after deleting from the end is:");
    deleteFromEnd();
    display();

    printf("\nList after deleting from position 3");
    deleteFromPos();
    display();

    return 0;
}
