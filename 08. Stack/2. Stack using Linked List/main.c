#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct  node * link;
}*top=NULL;
void push(int x){
    struct node *new_node;
    new_node=(struct node *) malloc(sizeof(struct node));
    new_node->data=x;
    new_node->link=top;//Top will have the address of the current last node. Make this node point to that
    top=new_node;//Moving top to this node. Hence making this the last node
    // in stack remember that the top will be pointing to the last node of the stack.

}
void pop(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("\nEmpty stack");
    }
    else{
        printf("\n%d",top->data);
        top=top->link;
        //Now free the node so that we dont waste memory
        free(temp);
    }
}

void display(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("\nEmpty stack");
    }
    else{
        printf("\n");
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}
void peek(){
    if(top==NULL){
        printf("\nEmpty stack");
    }
    else{
        printf("\n%d",top->data);
    }
}
int main() {
    int choice,x;

    do{
        printf("\nChoose what you want to do:\n1.Push\t2.Pop\t3.Peek\t4.Display:");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("\nEnter a number to push");
                scanf("%d",&x);
                push(x);
                break;
            case 2: pop();break;
            case 3: peek();break;
            case 4: display();break;
            default:break;
        }
    }while(choice!=0);
    return 0;
}
