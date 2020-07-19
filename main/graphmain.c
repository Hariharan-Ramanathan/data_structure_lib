#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"
#define l import_int_graphf
  
int main(){
    int_graph_list* g=l.create(7);
    l.addEdge(g,0,1,3);
    l.addEdge(g,1,0,3);
    l.addEdge(g,0,2,5);
    l.addEdge(g,2,0,5);
    l.addEdge(g,2,3,1);
    l.addEdge(g,3,2,1);
    l.addEdge(g,3,1,4);
    l.addEdge(g,1,3,4);
    l.addEdge(g,3,4,10);
    l.addEdge(g,4,3,10);
    l.addEdge(g,2,5,20);
    l.addEdge(g,5,2,20);
    l.addEdge(g,1,6,1);
    l.addEdge(g,6,1,1);
    //l.print(g);
    //printf("dfs \n"); 
    //l.dfs(g,4,6);
    //printf("bfs \n");
    //l.bfs(g,0,6);
   int* ans =(int*)malloc(7*sizeof(int));
    l.dijkstra(g, 0, 7, ans);
    for(int i=0; i<7; i++)
       printf("%d ", ans[i]);
    return 0;
}  