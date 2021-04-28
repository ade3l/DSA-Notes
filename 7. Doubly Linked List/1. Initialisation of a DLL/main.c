#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node* head;

void init(){
    head=NULL;
    struct node *new_node, *temp;
    int choice=1;
    while(choice) {
        new_node = (struct node *) malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        new_node->prev = NULL;
        if (head == NULL) {
            head = temp = new_node;
        } else {
            temp->next = new_node;
            new_node->prev = temp;
            temp = new_node;
        }


        printf("Do you want to continue (0,1)");
        scanf("%d", &choice);
    }
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int main() {
    init();
    display();
    return 0;
}
