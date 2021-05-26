#include <stdio.h>
#define size 10
void print_array(int a[]){
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}
int binarySearch(int a[],int n,int data){
    int l=0, r=n-1,mid;
    while(l<=r) {
         mid=(l+r)/2;
        printf("\nl, r, mid= %d, %d, %d",l,r,mid);

        if (data == a[mid]) {
            return mid;
        } else if (data < a[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    printf("\nl, r = %d, %d  (l>r) So exiting search",l,r);

    return -1;
}
int main() {
    int a[]={5,9,17,23,25,45,59,63,71,89},search,i;
    printf("\nInitial array:\t");
    print_array(a);
    printf("\n\nEnter the element to search for:");
    scanf("%d",&search);
    printf("Searching for:%d",search);
    printf("\n");
    int result= binarySearch(a,size,search);
    if(result==-1){
        printf("\nElement not found");
    }
    else{
        printf("\nElement found at position: %d",result+1);
    }
    return 0;
}
