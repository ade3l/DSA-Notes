#include <stdio.h>
int size=8;

void print_array(int *a){
    for(int i=0;i<size;i++)
        printf("%d\t",*(a+i));
}

void swap(int *a){
    int temp=*(a+1);
    *(a+1)=*a;
    *a=temp;
}

int main() {
    int a[]={64, 34, 25, 12, 22, 11, 90,100},flag;
    printf("\nInitial array:\t");
    print_array(a);
    printf("\n");
    for(int i=0;i<size-1;i++){
        flag=0;
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j]);//swaps a[j] and a[j+1]
                flag=1;
            }
        }
        printf("\nPass %d:\t\t",i+1);
        print_array(a);
        if(!flag)
            break;
    }
    printf("\n\nFinal sorted array: ");
    print_array(a);


    return 0;
}
