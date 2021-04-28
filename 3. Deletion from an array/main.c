#include <stdio.h>

int main() {
    //I will not be doing array run time initialisation
    //Compile time initialisation will be enough for demonstration purposes
    int a[50]={1,2,3,4,5,6,7,8,9,10}, size=10,pos,i;

    printf("Enter the position you want to delete from");
    scanf("%d",&pos);

    if(pos<=0||pos>size)
        printf("invalid position");
    else {
        for (i = pos - 1; i < size - 1; i++)
            a[i] = a[i + 1];
        size--;
        printf("The elements of the array are :\n");
        for (i = 0; i < size; i++)
            printf("%d\t", a[i]);
    }
    return 0;
}
