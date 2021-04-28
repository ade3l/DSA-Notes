#include <stdio.h>

int main() {
    int a[50],size,i,num,pos;

    //Getting size of the array
    printf("Enter size of array:",&size);
    scanf("%d",&size);

    //Getting elements of the array
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter data that you want to insert:");
    scanf("%d",&num);

    printf("Enter the position you want to insert at:");
    scanf("%d",&pos);
    if(pos<=0||pos>(size+1))
        printf("Invalid position");
    else{

        //Swapping to the right
        for(i=size-1;i>=pos-1;i--)
            a[i+1]=a[i];

        printf("\nArray after shifting\n");
        for(i=0;i<size;i++){
            printf("%d\t",a[i]);
        }
        //Inserting to the array
        a[pos-1]=num;
        size++;
        printf("\nArray after insertion\n");
        for(i=0;i<size;i++){
            printf("%d\t",a[i]);
        }
    }
    return 0;
}
