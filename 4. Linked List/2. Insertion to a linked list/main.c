#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    //--------------List initialisation. Skip over---------------------
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*new_node,*temp;
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
    temp=head;
    printf("The currnent list is:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
//    --------------------------------------------------------------
//    Insertion at the beginning
    printf("\nEnter a number to insert at the beginning");
    new_node=(struct node *) malloc(sizeof(struct node));
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
    temp=head;
    printf("list after inserting in beggining is:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
//    --------------------------------------------------------------
//    Insertion at the end
    new_node=(struct node *) malloc(sizeof(struct node));
    printf("\nEnter a number to insert at the end");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=new_node;

    printf("list after inserting in end is:\n");
    temp=head;
    count=0;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
//    --------------------------------------------------------------
//    Insertion at a postion
    new_node=(struct node *) malloc(sizeof(struct node));
    int i=1,pos;
    printf("\nEnter position to insert at");
    scanf("%d",&pos);
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    printf("\nEnter the data to insert");
    scanf("%d",&new_node->data);
    new_node->next=temp->next;
    temp->next=new_node;
    temp=head;
    printf("\nlist is:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    return 0;
}
