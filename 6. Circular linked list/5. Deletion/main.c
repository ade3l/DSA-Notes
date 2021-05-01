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
    struct node *temp;
    temp=tail->next;//temp will now be at the first element of the list
    if(tail==NULL){
        printf("Empty list");
    }
    else if(tail==tail->next){
        //This means that there is only one element in the CLL
        printf("here");
        tail=NULL;
        free(temp);
    }
    else{
        tail->next=temp->next;//making the last node point to the second node of the list so that we can delete the first one
        free(temp);
    }
}

void deleteFromEnd(){
    //here we'll need 2 pointers.
    //one to the last node and one to the second last one
    struct node *current_node,*previous_node;
    current_node=tail->next;
    while(current_node->next!=tail->next){
        previous_node=current_node;
        current_node=current_node->next;
        //the loop will break with current node on the last node and previous node on the second last node
    }
    previous_node->next=current_node->next;//make the second last node point to the first node
    tail=previous_node;
    free(current_node);
}
void deleteFromPos(){
    int i=1,pos=4;//get pos input from the user if needed
    struct node *current_node,*next_node;
    current_node=tail->next;

    while(i<pos-1){
        current_node=current_node->next;
        next_node=current_node->next;
        i++;
        //loop will break with next_node at the node to be deleted and current_node at the node before it
    }
    current_node->next=next_node->next;
    free(next_node);
}
int main() {
    init();
    printf("The intial list is:");
    display();

    printf("The list after deleting from the beginning:");
    deleteFromBeg();
    display();

    printf("The list after deleting from the end:");
    deleteFromEnd();
    display();

    printf("The list after deleting from the 4th position:");
    deleteFromPos();
    display();
    return 0;
}
