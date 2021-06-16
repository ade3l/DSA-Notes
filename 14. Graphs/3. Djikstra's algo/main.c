#include <stdio.h>
#include <limits.h>

#define MAX 8
#define initial 1
# define visited 2
int a[][MAX]={{0,2,0,7,0,12,0,2},{2,0,1,4,3,0,0,5},{0,1,0,0,4,0,0,4},{7,4,0,0,1,0,5,0},{0,3,4,1,0,0,7,0},{12,0,0,0,0,0,3,0},{0,0,0,5,7,3,0,0},{2,5,4,0,0,0,0,0}};
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
void djikstra(int);

int main() {

    //Setting the initial states and the distance to every vertex as infinity
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
    //Distance to source vertex will always be 0
    d[v]=0;
    while(v!=-1){
        state[v]=visited;

        for(int i=0;i<MAX;i++) {
            //Check for all the incident verices of the vertex that are unvisted
            if (a[v][i] != 0 && state[i] != visited) {
                if (d[v] + a[v][i] <=d[i]) {
                    d[i] = d[v] + a[v][i];
                }
            }
        }
        //Once all incident vertices have been visited and the values are updated, the vertex can be said to be "visited"
        //Getting the next vertex:
        v=findMin();

    }
}

int findMin() {
    int dist=INT_MAX,min=INT_MAX;
    int changed=0;

    for(int i=0;i<MAX;i++){
        //Cycle through all the vertices and get the one with minimum distance
        if(d[i]<=dist && state[i]!=visited)
        {   //If a vertex has a lesser distance than 'dist' then that  is the minimum vertedx
            dist=d[i];
            min=i;

            changed=1;
        }
    }
    //If none of the values are changed, it means that all vertices have been visited and changed will be remaining as 0
    if(!changed){
        //return -1 to break out from the while loop
        return -1;
    }
    else {
        return min;
    }
}
