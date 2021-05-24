#include <stdio.h>
#define N 5
int q[N];
int front=-1;
int rear=-1;

void enqueue(){
    if(rear==N-1){
        printf("\nQ is full\n");
    }
    else {
        int x;
        printf("\nEnter a number");
        scanf("%d", &x);

        if (front == -1 && rear == -1) {
            //Currently empty queue
            front=rear=0;
        }
        else{
            rear++;
        }
        q[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("\nQueue is empty");
    }
    else{
        printf("\nThe dequeued element is %d\n",q[front]);
        if(front==rear){
            //Only one element is in the q
            front=rear=-1;
        }
        else{
            front++;
        }
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else{
        printf("\n");
        for(int i=front;i<=rear;i++){
            printf("%d\t",q[i]);
        }
        printf("\n");
    }
}

void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else
        printf("\n%d\n",q[front]);
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
