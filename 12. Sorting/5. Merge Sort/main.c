#include <stdio.h>

# define size 9

void print_array(int a[]){
    for(int i=0;i<size;i++) {
        printf("%d\t" ,*(a + i));
    }
}
void merge(int a[],int lb,int mid,int ub){
    int b[size];
    int i=lb, j=mid+1, k=0;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=ub){
        b[k++]=a[j++];

    }

    for(i=lb,j=0;i<=ub;i++,j++){
        a[i]=b[j];
    }


}
void mergeSort(int a[],int lb,int ub){

    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main() {
    int a[]={15,5,24,8,1,3,16,10,20};
    printf("\nInitial array:\t");
    print_array(a);
    printf("\n");
    mergeSort(a,0,size-1);
    printf("\nSorted array:\t");
    print_array(a);

    return 0;
}
