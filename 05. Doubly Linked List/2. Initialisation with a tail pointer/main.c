#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node *head,*tail;
void create(){
    head=NULL;
    struct node *new_node;
    int choice=1;
    while (choice) {
        new_node = (struct node *) malloc(sizeof(struct node));
        new_node->next = new_node->prev = NULL;
        printf("\nEnter data:");
        scanf("%d", &new_node->data);
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        printf("Would you like to continue");
        scanf("%d", &choice);
    }

}

void display(){
    struct node *temp;
    temp=head;
    printf("\nThe list is:\n");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

int main() {
    create();
    display();
    return 0;
}
