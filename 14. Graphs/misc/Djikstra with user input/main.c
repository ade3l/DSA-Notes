#include <stdio.h>
#include <limits.h>
#define initial 1
# define visited 2
int MAX;
int state[100],d[100],a[100][100];

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

void init_weights(int a[100][100]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            a[i][j] = 0;
    }
}

int get_conn_input(int *x, int *y,int *w){
    printf("Vertex list is:\t");
    printVerts();

    printf("\nEnter the vertex numbers to establish a edge between followed by their weight in the form \"a,b,w\":");
    scanf("%d,%d,%d",x,y,w);
    if(*w==-1)
        return 0;
    else
        return 1;
}
void add_edge(int a[100][100],int x,int y,int w){
    a[x-1][y-1]=a[y-1][x-1]=w;
}
int main() {
    int x,y,w,choice;
    printf("\nEnter the number of elements in the graph");
    scanf("%d",&MAX);
    //Setting the initial states and the distance to every vertex as infinity
    for(int i=0;i<MAX;i++) {
        state[i] = initial;
        d[i]=INT_MAX;
    }
    printf("Vertices are :\n");
    printVerts();

    init_weights(a);
    printf("\n\nENTER WEIGHT AS -1 TO STOP INPUT\n\n");
    while(1){
        choice=get_conn_input(&x, &y,&w);
        if(choice==0){
            break;
        }
        add_edge(a, x, y,w);

    }

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