#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*tail;
void init(){
    tail=NULL;
    struct node *new_node;
    int choice=1;
    while(choice){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->next=NULL;
        printf("\nEnter data:");
        scanf("%d",&new_node->data);
        if(tail==NULL){
            tail=new_node;
            new_node->next=tail;
        }
        else{
            //this is a special case because in everything else we were able to access the first node directly using the head variable
            //but it wont be possible here
            //instead, since it is a circular list, the last node will always have address of the first node
            //so we can work with that
            new_node->next=tail->next; //tail->next will be the first node.
            tail->next=new_node;//make the last node point to the incoming new node and hence making the new node the last node
            tail=new_node;
        }

        printf("do you want to continue");
        scanf(" %d",&choice);
    }
}
void display(){
    struct node *temp;
    //again here there is no head pointer
    //so we get to the first node from the next pointer of the last node
    temp=tail->next;
    do{
       printf("%d\t",temp->data);
       temp=temp->next;
       //the loop will break when temp reaches tail->next i.e the first node again
    }while(temp!=tail->next);

}
int main() {
    init();
    printf("\n the list is: ");
    display();
    return 0;
}
