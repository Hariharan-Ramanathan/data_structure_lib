void changeHeap(int p, int data, int* heap, int* heapIndex, int n){
	int s=0;
	while(heapIndex[s] != p){
		s++;
	}
	heap[s] = data;
	for(int i = n-1; i>=0; i--)
		minHeapDown(heap, heapIndex, n, i);
}
void int_dijkstraUTIL(int_graph_list* g,int* visited,int* heap, int* heapIndex , int* ans, int size, int n, int vertice, int edge){
	int a = vertice;
	int_list* pp = g->list[a].graph;
	int_list* ww = g->list[a].weight;

	if((pp)->head!=NULL){
		int_list_node* p = pp->head;
		int_list_node* w = ww->head;
		if(visited[a]!=1){
			visited[a]=1;
			//printf ("\npushed = ");
			while(p != NULL){
				if(ans[p->data] == 0 && visited[p->data] != 1){
					ans[p->data] =  w->data + ans[a];
					//printf(" %d - %d ",p->data, w->data);
					minHeapPush(heap, heapIndex, &size, w->data +ans[a], p->data);
						}
				else if(ans[p->data] > (w->data +ans[a]) && visited[p->data] != 1){
					ans[p->data] = w->data + ans[a];
					changeHeap(p->data, (w->data + ans[a]), heap, heapIndex, n);
				}
				p = p->next;
				w = w->next;
			}

			while(size != 0){
			minHeapPop(heap, heapIndex, &edge, &vertice, &size);
			//	printf("\ncurrent =%d vertice =%d edge = %d size =%d    ", a, vertice, edge, size);
				/*for(int i=0; i<7; i++)
					printf("%d ",visited[i]);
				printf ("   ");
				for(int i=0; i<7; i++)
					printf("%d ",ans[i]);
				printf ("   ");
				for(int i=0; i<7; i++)
					printf("%d",heap[i]);
					printf("\n");
				*/int_dijkstraUTIL(g, visited, heap, heapIndex, ans, size, n, vertice, edge);
			}
		}	
	}
}

void int_graph_dijkstra(int_graph_list* g,int a,int v, int* ans){
	int visited[v];
	int heap[v];
	int heapIndex[v];

	for(int i=0;i<v;i++){
		visited[i]=0;
		heap[i]=0;
		heapIndex[i] = 0;
		ans[i] = 0;
	}
	int_dijkstraUTIL(g,visited,heap, heapIndex ,ans, 0, v, a, 0);
	//int_print_dijkstra(weight,v,visited);
}

