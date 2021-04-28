#include <stdio.h>

int main() {
    int b=10,a[]={6,2,1,5,3},*p,*q;
    p=&b;
    q=a;
//This contains kinda everything. But I might've missed some
    printf("b=10 is the int and p=&b is the pointer to it \n");
    printf("b=%d\n",b);
    printf("*p =%d\n",*p);
    printf("address of b= &b = %p\n",&b);
    printf("address of b= p = %p\n",p);
    printf("\na={6,2,1,5,3} is the array and q=a is the pointer to it\n");
    printf("a=%p\n",a);
    printf("q=%p\n",q);
    printf("*a = %d\n",*a);
    printf("*q = %d\n",*q);
    printf("*(a++) is not valid\n");
    printf("*(++q) = %d\n",*(++q));
    printf("\na = &a = %p\n",&a);
    printf("q != &q\n");
    printf("a[2] = *(a+2) = *(2+a) = 2[a] = %d",2[a]);
//    printf("",);
//    printf("",);
//    printf("",);
//    printf("",);
    return 0;
}
