#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*new_node;



void reverse(){
//Before we break any links and reverse them, we need to make sure that we have the address stored in another pointer
//Otherwise we will lose the links and the list will be broken
    struct node *prev_node,*current_node,*next_node;
    prev_node=NULL;
    current_node=next_node=head;
    while (next_node!=NULL){
        next_node = next_node->next;
        //Now we have the next nodes address saved. We can safely break the links between the current one and next one
        //And we will overwrite the current nodes pointer to the previous node
        current_node->next=prev_node;
        //now we can move the prev node to the current node and then the current node to the next node and execute the loop again
        prev_node=current_node;
        current_node=next_node;
    }
    //At the end of the loop, next_node and current_node will have null stored in them
    //prev_node will remain at the last element of the initial list
    //Now we move the head to the otherside and reversing will be complete
    head=prev_node;
}
void display(){
    temp=head;
    printf("\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void init(){
    //You can get the list input if you want. I will just initialise it at compile time for simplicity's sake
    head=NULL;
    for(int i=1;i<=10;i++){
        new_node=(struct node *) malloc(sizeof(struct node));
        new_node->data=10*i;
        if(head==NULL){
            head=temp=new_node;
        }
        else{
            temp->next=new_node;
            temp=new_node;
            temp->next=NULL;
        }
    }

}
int main() {
    init();
    printf("starting list is:");
    display();
    printf("\n");

    printf("list after reversing: ");
    reverse();
    display();
    return 0;
}
