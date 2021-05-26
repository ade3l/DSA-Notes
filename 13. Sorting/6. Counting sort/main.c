#include <stdio.h>
#define size 17

void print_array(int a[],int end){
    for(int i=0;i<end;i++) {
        printf("%d  " ,*(a + i));
    }
}

int main() {
    int a[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9},max=a[0],i;
    printf("\ninital array:\t\t");
    print_array(a,size);
    //finding the max element
    for(i=1;i<size;i++) {
        if (a[i] > max)
            max = a[i];
    }
    //creating the counts list
    int count[size];
    for (int i = 0; i <= max ; ++i) {
        count[i]=0;
    }

    //counting the list a
    for (int i = 0; i < size; ++i) {
        ++count[a[i]];
    }

    printf("\n\ncounts array:\t\t");
    print_array(count,max+1);

    //taking cf of count
    for (int i = 1; i <=max ; ++i) {
        count[i]+=count[i-1];
    }
    printf("\ncounts c.f array:\t");
    print_array(count,max+1);

    //creating the sorted list;
    int b[size];
    for(i=size-1;i>=0;i--){
        b[--count[a[i]]]=a[i];
    }

    for(i=0;i<size;i++){
        a[i]=b[i];
    }
    printf("\n\nsorted array:\t\t");
    print_array(a,size);
    return 0;
}
