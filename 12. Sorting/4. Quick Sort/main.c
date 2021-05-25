#include <stdio.h>
int size=6;

void print_array(int *a){
    for(int i=0;i<size;i++) {
        printf("%d\t" ,*(a + i));
    }
}
void swap(int *a, int *b) {
    int t=*a;
    *a = *b;
    *b = t;
}

int partition (int a[], int lb, int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end)
            swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    return end;
}

void quickSort(int a[],int lb, int ub){
    if(lb<ub){
        int loc= partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }
}

int main() {
    int a[]={10, 7, 8, 9, 1, 5};
    printf("\nInitial array:\t");
    print_array(a);
    printf("\n");
    quickSort(a,0,size-1);
    printf("\nSorted array:\t");
    print_array(a);
    return 0;
}
