#include <stdio.h>

int main() {
    int a[3][3]={{6,2,5},{0,1,3},{4,8,9}};
    int *p;
    p=&a[0][0];//= a[0]
    printf("a is an array {{6,2,5},{0,1,3},{4,8,9}} and p is a pointer to it initialised as p=&a[0][0]\n");

    printf("\np= %u\n",p);
    printf("a= %u\n",a);
    printf("&a[0][0]= %u\n",&a[0][0]);

    printf("\na+1= %u\n",a+1);
    printf("*(a+1) = %u\n",*(a+1));
    printf("&a[1][0] = %u\n",&a[1][0]);

    printf("\n&a[0]+1= %u\n",&a[0]+1);
    printf("*a=%d",*a);
    return 0;
}
