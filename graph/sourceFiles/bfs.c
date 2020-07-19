void int_bfs_print(int_graph_list* g,int_list* temp,int* visited, int_queue* q){
	if(temp->head!=NULL){
		int_list_node* p=temp->head;
		while(p!=NULL){
			if(!visited[p->data]){
				int_queue_enqueue(q, p->data);
                printf("%d\n",p->data);
			}	
		visited[p->data]=1;
		p=p->next;
		}
		while(!int_queue_is_empty(q)){
			int_bfs_print(g,g->list[int_queue_dequeue(q)].graph,visited,q);
		}}
}
void int_graph_bfs(int_graph_list* g,int a,int n){
	int visited[n];	
    int_queue* queue = create_int_list();
	for(int i=0;i<n;i++){
	visited[i]=0;
	}
	printf("%d\n",a);
	visited[a]=1;
	int_bfs_print(g, g->list[a].graph, visited, queue);

}

void float_bfs_print(float_graph_list* g,int_list* temp,int* visited, int_queue* q){
	if(temp->head!=NULL){
		int_list_node* p=temp->head;
		while(p!=NULL){
			if(!visited[p->data]){
				int_queue_enqueue(q, p->data);
                printf("%d\n",p->data);
			}	
		visited[p->data]=1;
		p=p->next;
		}
		while(!int_queue_is_empty(q)){
			float_bfs_print(g,g->list[int_queue_dequeue(q)].graph,visited,q);
		}}
}
void float_graph_bfs(float_graph_list* g,int a,int n){
	int visited[n];	
    int_queue* queue = create_int_list();
	for(int i=0;i<n;i++){
	visited[i]=0;
	}
	printf("%d\n",a);
	visited[a]=1;
	float_bfs_print(g, g->list[a].graph, visited, queue);

}


void double_bfs_print(double_graph_list* g,int_list* temp,int* visited, int_queue* q){
	if(temp->head!=NULL){
		int_list_node* p=temp->head;
		while(p!=NULL){
			if(!visited[p->data]){
				int_queue_enqueue(q, p->data);
                printf("%d\n",p->data);
			}	
		visited[p->data]=1;
		p=p->next;
		}
		while(!int_queue_is_empty(q)){
			double_bfs_print(g,g->list[int_queue_dequeue(q)].graph,visited,q);
		}}
}
void double_graph_bfs(double_graph_list* g,int a,int n){
	int visited[n];	
    int_queue* queue = create_int_list();
	for(int i=0;i<n;i++){
	visited[i]=0;
	}
	printf("%d\n",a);
	visited[a]=1;
	double_bfs_print(g, g->list[a].graph, visited, queue);

}
