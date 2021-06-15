#include <stdio.h>
#define v 5
char vertex_list[]={'A','B','C','D','E'};

/*We will be creating:
        B -- C
       /   / |
      A   /  |
       \ /   |
        D -- E
 */

//Initialise the array with 0's
void init(int a[v][v]){
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            a[i][j]=0;
}
//A function to print the vertices
void printVerts(){

    for(int i=0;i<v;i++){
        printf("\t%d:%c",(i+1),vertex_list[i]);
    }
}
//Function to print the array
void print_array(int a[v][v]){
    printf("\n");
    printVerts();
    for(int i=0;i<v;i++) {
        printf("\n");
        printf("%c:\t", vertex_list[i]);
        for (int j = 0; j < v; j++)
            printf("%d\t",a[i][j]);
    }
}

void add_edge(int a[v][v],int x,int y){
    a[x-1][y-1]=a[y-1][x-1]=1;
}
void get_conn_input(int *x, int *y);
int main() {
    int a[v][v],x,y;
    init(a);
    //----------------Use this while loop if you want to add your own input-------------------
    /*  int choice=1;
        while(choice){
        get_conn_input(&x, &y);
        add_edge(a, x, y);
        printf("\n1. Add input \t0.Done");
        scanf("%d",&choice);
    }*/
    //    ---------------------------------
    printf("Vertex list is:\t");
    printVerts();
    printf("\n");

    add_edge(a,1,2);
    add_edge(a,1,4);
    add_edge(a,2,3);
    add_edge(a,2,4);
    add_edge(a,3,5);
    add_edge(a,4,5);
    add_edge(a,4,3);
    print_array(a);

    return 0;
}
void get_conn_input(int *x, int *y){
    printf("Vertex list is:\t");
    printVerts();
    printf("\n");

    printf("\nEnter the first vertex number to establish a edge between:");
    scanf("%d",x);
    printf("Enter the second vertex number to establish the edge:");
    scanf("%d",y);
}
