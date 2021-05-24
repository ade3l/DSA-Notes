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
   int choice=1;
   while(choice){
       new_node=(struct node *) malloc(sizeof(struct node));
       new_node->next=NULL;
       new_node->prev=NULL;
       printf("\nEnter data:");
       scanf("%d",&new_node->data);

       if(head==NULL){
           head=tail=new_node;
           new_node->next=new_node->prev=new_node;
       }
       else{
           tail->next=new_node;
           new_node->prev=tail;
           head->prev=new_node;
           new_node->next=head;
           tail=new_node;
       }

       printf("Do you want to continue (0,1):");
       scanf("%d",&choice);

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
int main() {
    init();
    display();
    return 0;
}
