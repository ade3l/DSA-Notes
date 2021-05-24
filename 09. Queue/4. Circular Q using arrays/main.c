#include <stdio.h>
#define N 5
int Q[N],front=-1,rear=-1;

void enqueue(){
    if(((rear+1)%N)==front){
        printf("\nQ is full");
    }
    else {
        int x;
        printf("\nEnter a number");
        scanf("%d", &x);

        if (front == -1 && rear == -1) {
            front = rear = 0;
        }
        else{
            rear=(rear+1)%N;
        }
        Q[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("\nQueue is empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("\nQueue is empty\n");
    }
    else{
        printf("\n");
        int i=front;
        while(i!=rear){
            printf("%d\t",Q[i]);
            i=(i+1)%N;
        }
        printf("%d",Q[i]);
        printf("\n");
    }
}

void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else
        printf("\n%d\n",Q[front]);
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
            case 0: break;
            default:printf("\nInvalid input\n");break;
        }
    }while(choice);
    return 0;
}
