#include <stdio.h>

# define size 9
void print_array(int a[]){
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}
int main() {
    int a[]={1,17,13,100,42,78,19,12,57},search,i;
    printf("\nInitial array:\t");
    print_array(a);
    printf("\nEnter the element to search for:");
    scanf("%d",&search);
    printf("\n\nSearching for:%d",search);
    printf("\n");
    for(i=0;i<size;i++){
        printf("\nChecking:%d",a[i]);

        if(a[i]==search) {
            printf("\n\n%d found at position %d. Searching stopped\n", search, i + 1);
            break;
        }
    }
    if(i==size)
        printf("\n\nElement not found");

    return 0;
}
