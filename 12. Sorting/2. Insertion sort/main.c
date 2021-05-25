#include <stdio.h>
int size=6;
void print_array(int *a,int pos){
    printf("[");
    for(int i=0;i<size;i++) {
        printf("%d", *(a + i));
        if (i == pos)
            printf("]");
        printf("\t");

    }
}
int main() {
    int a[]={5,4,10,1,6,2};
    printf("\nInitial array:\t");
    print_array(a,0);
    printf("\n");

    for(int i=1;i<size;i++){
        int temp=a[i];
        int j;
        for( j=i-1; j>=0 && a[j]>temp ; j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;//inserting the value to sorted list
        printf("\nSort %d:\t\t",i);
        print_array(a,i);
    }

    printf("\n\nFinal sorted array:\t");
    print_array(a,size-1);
    return 0;
}
