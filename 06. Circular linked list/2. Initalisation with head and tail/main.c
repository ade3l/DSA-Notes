#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head,*tail;
void init(){
    head=tail=NULL;
    struct node *new_node;
    int choice=1;
    while(choice){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->next=NULL;
        printf("\nEnter data:");
        scanf("%d",&new_node->data);

        if(head==NULL){
            head=tail=new_node;
        }
        else{
            tail->next=new_node;
            tail=new_node;
        }
        new_node->next=head;

        printf("do you want to continue");
        scanf(" %d",&choice);
    }
}
void display(){
    struct node* temp;
    temp=head;
    printf("\n");

    do{
        //loop will start at head but by the time the while condition is checked, the temp variable would've been moved to the next node
        //the condition will only be false when the loop prints all elmts and then reaches the first node again
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=head);

    printf("\n");
}
int main() {
    init();
    display();
    return 0;
}
