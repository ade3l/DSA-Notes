#include <stdio.h>

int main() {
    int a[50],size,i;

    //Getting size of the array
    printf("Enter size of array:",&size);
    scanf("%d",&size);

    //Getting elements of the array
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    //Printing the elements of the array
    printf("The elements of the array are :\n");
    for(i=0;i<size;i++)
        printf("%d\n", a[i]);
    return 0;
}
