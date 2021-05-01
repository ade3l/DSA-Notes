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
    for(int i=1;i<10;i++){
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

void insertAtBeg(){
    struct node *new_node;
    new_node=(struct node*) malloc(sizeof(struct node));
    new_node->data=0;//read input from user if you want
    new_node->next=NULL;

    if(tail==NULL){
        //list is empty
        tail=new_node;
        new_node->next=new_node;
    }
    else{
        new_node->next=tail->next;//new node now points to the first node
        tail->next=new_node;//last node points now points to the new node as it is now the first node
    }
}
void insertAtEnd(){
    struct node *new_node;
    new_node=(struct node*) malloc(sizeof(struct node));
    new_node->data=100;//read input from user if you want
    new_node->next=NULL;
    if(tail==NULL){
        tail=new_node;
        new_node->next=new_node;
    }
    else{
        new_node->next=tail->next;
        tail->next=new_node;
        tail=new_node;
    }
    //Basically inserting at the end is same as inserting at the beginning but the tail pointer is moved to the new node.
    //in insert at beginning this isn't done
}

void insertAtPos(){
    struct node *new_node,*temp;
    int i=1,pos=5,num=35;//take pos and num as inputs from the user if needed
    //add check conditions to check if pos=1||pos=length of list. if it is then call insert at begg or end
    //also check if pos<1||pos>length. If it is, then it's an invalid position

    new_node=(struct node*) malloc(sizeof(struct node));
    new_node->data=35;
    new_node->next=NULL;
    temp=tail->next;//temp now points to the first node
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
int main() {
    init();
    printf("The intial list is:");
    display();

    printf("The list after inserting 0 at the beginning");
    insertAtBeg();
    display();

    printf("The list after inserting 100 at the end");
    insertAtEnd();
    display();

    printf("The list after inserting 35 at position 5:");
    insertAtPos();
    display();
    return 0;
}
