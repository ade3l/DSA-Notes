#include <stdio.h>
#include <stdlib.h>

//This is using linked list stacks as it is more complicated than stack using array
//array stack follows the same theory as this
struct node{
    int data;
    struct node *link;
}*top1=NULL,*top2=NULL;
int count=0;
void push1(int data){
    struct node *new_node;
    new_node=(struct node *) malloc(sizeof(struct node));
    new_node->link = NULL;
    new_node->data = data;

    if(top1 == NULL){
        top1=new_node;
    }
    else{
        new_node->link=top1;
        top1=new_node;
    }
}
int pop1(){
    struct node *temp;
    temp=top1;
    top1=top1->link;
    int x=temp->data;
    free(temp);
    return(x);
}
void push2(int data){
    struct node *new_node;
    new_node=(struct node *) malloc(sizeof(struct node));
    new_node->link = NULL;
    new_node->data = data;

    if(top2 == NULL){
        top2=new_node;
    }
    else{
        new_node->link=top2;
        top2=new_node;
    }
}
int pop2(){
    struct node *temp;
    temp=top2;
    top2=top2->link;
    int x=temp->data;
    free(temp);
    return(x);
}

void enqueue(){
    int x;
    printf("\nEnter a number");
    scanf("%d", &x);
    push1(x);
    count++;
}

void dequeue(){
    if(top1==NULL ){
        printf("\nQ is empty");
    }
    else{
        for(int i=0;i<count;i++){
            push2(pop1());
        }
        int x= pop2();
        count--;
        printf("\nThe dequeued number is %d\n",x);
        for(int i=0;i<count;i++){
            push1(pop2());
        }
    }
}

void display(){
    if(top1==NULL ){
        printf("\nQ is empty\n");
    }
    else {
        struct node *temp;
        temp = top1;
        printf("\n");
        while (temp != NULL) {
            printf("%d\t", temp->data);
            temp = temp->link;
        }//The queue will be displayed in reverse. To fix this if needed, invert stack 2 to stack 1 and then print stack 2 instead of stack 1
        printf("\n");
    }

}

int main() {
    int choice;
    do{
        printf("\nOperations:\n1.Enqueue\n2.Dequeue\n3.Display\n0.Quit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:enqueue();break;
            case 2:dequeue();break;
            case 3:display();break;
            case 0:break;
            default:printf("\nInvalid input\n");break;
        }
    }while(choice);
    return 0;
}
