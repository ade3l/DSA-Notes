#include <stdio.h>
int size;
void print_array(char a[]){
    for(int i=0;i<size;i++){
        printf("%c\t",a[i]);
    }
}
int binarySearch(char a[],int n,char data){
    int l=0, r=n-1,mid;
    while(l<=r) {
        mid=(l+r)/2;
        printf("\nl, r, mid= %d, %d, %d",l,r,mid);

        if ((int)data == (int)a[mid]) {
            return mid;
        } else if ((int)data < (int)a[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    printf("\nl, r = %d, %d  (l>r) So exiting search",l,r);

    return -1;
}
int main() {

    int i;
    char a[50],search;
    printf("Enter the number of elements");
    scanf("%d",&size);
    for (int j = 0; j < size; j++) {
        printf("\nEnter element %d : ", (j+1));
        scanf("%s",&a[j]);
    }
    printf("\nInitial array:\t");
    print_array(a);
    printf("\n\nEnter the element to search for:");
    scanf("%s",&search);
    printf("Searching for:%c",search);
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