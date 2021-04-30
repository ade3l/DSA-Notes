#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;
void init(){
    head=NULL;
    struct node *new_node,*temp;
    int choice=1;
    while(choice){
        new_node=(struct node *) malloc(sizeof (struct node));
        new_node->next=NULL;
        printf("\nEnter data:");
        scanf("%d", &new_node->data);
        if(head==NULL){
            //will enter into this if it is the first node
            head=temp=new_node;

        }
        else{
            temp->next=new_node;
            temp=new_node;
        }
        //basically rn we've created a linked list
        //now temp will be pointing to the last node
        //now make the last node point to the first node to make the list circular
        temp->next=head;
        printf("Do you want to continue (0,1):");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        printf("\n");
        temp=head;
        while(temp->next!=head){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        //at the end of this loop temp will be at the last node
        //but it wont get printed as its 'next' is = head and the loop wont execute for it
        //so we need to print that
        printf("%d\n",temp->data);
        //other method is to use a do while loop and put condition as temp!=head
    }
}
int main() {
    init();
    printf("The created circular list is:");
    display();
    return 0;
}
