#include <stdio.h>
int size=6;
void print_array(int *a,int pos){
    printf("[");
    if(pos==-1)
        printf("]");

    for(int i=0;i<size;i++) {
        printf("%d", *(a + i));
        if (i == pos)
            printf("]");
        printf("\t");

    }
}
int main() {
    int a[]={7,4,10,8,3,1},i;
    printf("\nInitial array:\t");
    print_array(a,-1);
    printf("\n");
    for( i=0;i<size-1;i++){
        {
            int j;int min = i;
            for (j=i+1;j<size;j++)
                if (a[j] < a[min])
                    min = j;

            if(min!=i){
                //swap
                int temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
            printf("\nPass %d:\t\t",i+1);
            print_array(a,i);
        }
    }
    printf("\n\nFinal sorted array:\t");
    print_array(a,size);
    printf("\b]");
    return 0;
}
