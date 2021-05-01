#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*tail;

//We will be using a CLL with only a tail
//CLL with head can be done in the same way as a normal LL is done

void init(){
    tail=NULL;
    struct node *new_node;
    for(int i=1;i<=10;i++){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->next=NULL;
        new_node->data=10*i;
        if(tail==NULL){
            tail=new_node;
            new_node->next=tail;
        }
        else{
            new_node->next=tail->next;
            tail->next=new_node;
            tail=new_node;
        }
    }
}
void display(){
    struct node *temp;
    temp=tail->next;
    printf("\n");
    do{
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=tail->next);
    printf("\n");
}
void deleteFromBeg(){
    
}
int main() {
    init();
    printf("The intial list is:");
    display();    return 0;
}
