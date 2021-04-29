#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*tail;

void init(){
    head=tail=NULL;
    struct node *new_node;
    for(int i=1;i<10;i++) {
        new_node = (struct node *) malloc(sizeof(struct node));
        new_node->next=new_node->prev=NULL;
        new_node->data=10*i;
        if(head==NULL){
            head=tail=new_node;
        }
        else{
            tail->next = new_node;
            new_node->prev=tail;
            tail=new_node;
        }
    }
}
void display(){
    struct node* temp;
    temp=head;
    printf("\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delFromBeg(){
    struct node* temp;
    temp=head;
    head=temp->next;
    head->prev=NULL;
    free(temp);
}
void delFromEnd(){
    struct node* temp;
    temp=tail;
    tail=temp->prev;
    tail->next=NULL;
    free(temp);
}
void delFromPos(){
    int i=1, pos=3;
    struct node* temp;
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);

}
int main() {
    printf("Initial list:");
    init();
    display();

    printf("List after deleting from the beggining:");
    delFromBeg();
    display();

    printf("List after deleting from the end:");
    delFromEnd();
    display();

    printf("List after deleting from position 3:");
    delFromPos();
    display();

    return 0;
}
