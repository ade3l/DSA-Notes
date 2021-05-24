#include <stdio.h>
#define N 5
int deQ[N];
int front=-1,rear=-1;

void enQfront(){
    if(((rear+1)%N)==front){
    printf("\ndeQueue is full");
    }
    else{
        int x;
        printf("\nInput a number");
        scanf("%d",&x);
        if(front==-1 && rear==-1)
            front=rear=0;
        else {
            front = (front - 1) % N;/*This is a shortened version
            The simpler but longer way to do this would be:
                if(front==0) {
                    front=N-1;
                }
                else { front--; }
                */
        }
        deQ[front]=x;
    }
}
void enQrear(){
    if(((rear+1)%N)==front){
        printf("\ndeQueue is full");
    }
    else{
        int x;
        printf("\nInput a number");
        scanf("%d",&x);
        if(front==-1 && rear==-1)
            front=rear=0;
        else
            rear=(rear+1)%N;
        deQ[rear]=x;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("\nThe queue is empty");
    }
    else {
        int i = front;
        printf("\n");
        while (i != rear) {
            printf("%d\t", deQ[i]);
            i = (i + 1) % N;
        }
        printf("%d", deQ[i]);
        printf("\n");

    }
}

void getFront(){
    if(front==-1 && rear==-1){
        printf("\nThe queue is empty");
    }
    else{
        printf("\n%d\n",deQ[front]);
    }
}

void deQfront(){
    if(front==-1 && rear==-1){
        printf("\nThe queue is empty");
    }
    else{
        printf("\nThe deQ'd element is %d\n",deQ[front]);
        if(front==rear)
            front=rear=-1;
        else
            front=(front+1)%N;

    }
}

void deQrear(){
    if(front==-1 && rear==-1){
        printf("\nThe queue is empty");
    }
    else{
        printf("\nThe deQ'd element is %d\n",deQ[rear]);
        if(front==rear)
            front=rear=-1;
        else
            rear=(rear-1)%N;

    }
}

int main() {
    int choice=1;
    while(choice){
        printf("\nChoose:\n1.Enqueue to front\n2.Enqueue to rear\n3.Display\n4.Dequeue from front\n5.Dequeue from rear\n6.Show front element");
        scanf("%d",&choice);
        switch(choice){
            case 1:enQfront();break;
            case 2:enQrear();break;
            case 3:display();break;
            case 4:deQfront();break;
            case 5:deQrear();break;
            case 6:getFront();break;
            default:break;

        }
    }
    return 0;
}
