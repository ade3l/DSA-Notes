#include <stdio.h>
#include <limits.h>

#define MAX 8
#define initial 1
# define visited 2
int a[][MAX]={{0,2,0,7,0,12,0,2},{2,0,1,4,3,0,0,5},{0,1,0,0,4,0,0,4},{7,4,0,0,1,0,0,0},{0,3,4,1,0,0,7,0},{12,0,0,0,0,0,3,0},{0,0,0,0,7,3,0,0},{2,5,4,0,0,0,0,0}};
int state[MAX],d[MAX];

void print_dists(){
    printf("\n");
    for(int i=0;i<MAX;i++){
        printf("%d\t",d[i]);
    }
}
void printVerts(){
    for(int i=0;i<MAX;i++){
        printf("%d : %c\t\t",(i+1),(char)(i+65));
    }
}
int findMin();
void init();
void djikstra();

int main() {
    for(int i=0;i<MAX;i++) {
        state[i] = initial;
        d[i]=INT_MAX;
    }
    printf("Vertices are :");
    printVerts();
    printf("\nEnter the vertex number to use as source");
    int v;
    scanf("%d",&v);
    djikstra(v-1);
    printf("Distances from the vertex: ");
    print_dists();
    return 0;
}

void djikstra(int v){

    d[v]=0;
    while(v!=-1){
        for(int i=0;i<MAX;i++) {
            //Check for all the incident verices of the vertex that are unvisted
            if (a[v][i] != 0 && state[i] != visited) {
                if (d[v] + a[v][i] < d[i]) {
                    d[i] = d[v] + a[v][i];
                }
            }
        }
        state[v]=visited;
        v=findMin();

    }
}

int findMin() {
    int dist=INT_MAX,min=INT_MAX;
    int changed=0;
    for(int i=0;i<MAX;i++){
        if(d[i]<dist && state[i]!=visited)
        {
            dist=d[i];
            min=i;
            changed=1;
        }
    }
    if(changed==0){
        return -1;
    }
    else {
        return min;
    }
}
