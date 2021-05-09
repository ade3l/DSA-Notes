#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(){
    int x;
    printf("\nEnter a number");
    scanf("%d", &x);

    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->next=NULL;
    new_node->data=x;


    if(front==NULL && rear==NULL){
        front=rear=new_node;
    }
    else{
        rear->next=new_node;
        rear=new_node;
    }
}

void dequeue(){
    if(front==NULL && rear==NULL){
        printf("\nQ is empty");
    }
    else{
        struct node* temp;
        temp=front;
        front=front->next;
        printf("\nThe dequeued number is %d\n",temp->data);
        free(temp);
    }
}

void display(){
    if(front==NULL && rear==NULL){
        printf("\nQ is empty");
    }
    else{
        struct node* temp;
        temp=front;
        printf("\n");
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");

    }
}

void peek(){
    if(front==NULL && rear==NULL){
        printf("\nQ is empty\n");
    }
    else{
        printf("\n%d\n",front->data);
    }
}
int main() {
    int choice;
    do{
        printf("\nOperations:\n1.Enqueue\n2.Dequeue\n3.Display\n4.peek\n0.Quit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:enqueue();break;
            case 2:dequeue();break;
            case 3:display();break;
            case 4:peek();break;
            case 0:break;
            default:printf("\nInvalid input\n");break;
        }
    }while(choice);
    return 0;
}
