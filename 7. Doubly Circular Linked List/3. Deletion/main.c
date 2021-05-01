#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
}*head,*tail;

int getLength(){
    struct node *temp;
    int length=0;
    temp=head;
    do{
        length++;
        temp=temp->next;
    }while(temp!=head);
    return length;
}

void init(){
    head=tail=NULL;
    struct node *new_node;
    for(int i=1;i<=10;i++) {
        new_node=(struct node *) malloc(sizeof (struct node));
        new_node->data=10*i;
        if (head == NULL) {
            head = tail = new_node;
            new_node->next = new_node->prev = new_node;
        } else {
            new_node->prev = tail;
            new_node->next = head;
            head->prev = new_node;
            tail->next = new_node;
            tail = new_node;
        }
    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("\n");
    if(head==NULL){
        printf("List is empty");
    }
    else{
        do{
            printf("%d\t",temp->data);
            temp=temp->next;
        }while(temp!=head);
    }
    printf("\n");
}
void deleteFromBeg(){
    struct node *temp;

    if(head->next==head){
        free(head);
        head=tail=NULL;
    }
    else {
        temp=head;
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
}
void deleteFromEnd(){
    struct node *temp;
    temp=tail;
    if(temp==temp->next){
        head=tail=NULL;
        free(temp);
    }
    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }
}
void deleteFromPos(){

    int i=1,length,pos=4;//get pos input from user if needed
    length=getLength();
    struct node *temp;
    temp=head;
    if(pos<1||pos>length){
        printf("invalid position");
    }
    else if(pos==1){
        deleteFromBeg();
    }
    else if(pos==8){
        deleteFromEnd();
    }
    else{
      while(i<pos){
          temp=temp->next;
          i++;
      }
      temp->next->prev=temp->prev;
      temp->prev->next=temp->next;
      free(temp);
    }


}

int main(){
    printf("The initial list is:");
    init();
    display();

    printf("The list after deleting from the beginning :");
    deleteFromBeg();
    display();

    printf("The list after deleting from the end :");
    deleteFromEnd();
    display();

    printf("The list after deleting from pos 4 :");
    deleteFromPos();
    display();


    return 0;
}
