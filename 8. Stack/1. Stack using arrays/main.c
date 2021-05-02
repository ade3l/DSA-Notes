#include <stdio.h>

# define N 5
int stack[N];
int top=-1;
void push(){
    int x;
    if(top==N-1){
        printf("overflow");
    }
    else {
        printf("\nEnter a element");
        scanf("%d", &x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    //if we need to print the popped item initialise a variable. otherwise we dont need it
    int item;
    if(top==-1){
        printf("\nunderflow condition");
    }
    else{
        int item=stack[top];
        top--;
        printf("\n%d",item);

    }
}

void peek(){
    if(top==-1){
        printf("\nlist is empty");
    }
    else{
        printf("\n%d",stack[top]);
    }
}

void display(){
    int i;
    if(top==-1){
        printf("\nlist is empty");
    }
    else{
        printf("\n");
        for(i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
}
int main() {
    int choice;
    do{
        printf("\nChoose what you want to do:\n1.Push\t2.Pop\t3.Peek\t4.Display:");
        scanf("%d",&choice);
        switch (choice){
            case 1: push();break;
            case 2: pop();break;
            case 3: peek();break;
            case 4: display();break;
            default:break;
        }
    }while(choice!=0);

    return 0;
}
