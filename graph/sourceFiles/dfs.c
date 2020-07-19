void int_graph_dfsUTIL(int_graph_list* g,int a,int* visited,int n){
	int_list* pp=g->list[a].graph;
	printf("%d\n",a);
	visited[a]=1;
	int_list_node* p = pp->head;
	while(p!=NULL){
		a=p->data;
		if(!visited[a])
			int_graph_dfsUTIL(g,a,visited,n);
		p=p->next;
	}
}

void int_graph_dfs(int_graph_list* g,int a,int V){
	int visited[V];
	for(int i=0;i<V;i++){
		visited[i]=0;
	}
	int_graph_dfsUTIL(g,a,visited,V);
}

void float_graph_dfsUTIL(float_graph_list* g,int a,int* visited,int n){
	int_list* pp=g->list[a].graph;
	printf("%d\n",a);
	visited[a]=1;
	int_list_node* p = pp->head;
	while(p!=NULL){
		a=p->data;
		if(!visited[a])
			float_graph_dfsUTIL(g,a,visited,n);
		p=p->next;
	}
}

void float_graph_dfs(float_graph_list* g,int a,int V){
	int visited[V];
	for(int i=0;i<V;i++){
		visited[i]=0;
	}
	float_graph_dfsUTIL(g,a,visited,V);
}

void double_graph_dfsUTIL(double_graph_list* g,int a,int* visited,int n){
	int_list* pp=g->list[a].graph;
	printf("%d\n",a);
	visited[a]=1;
	int_list_node* p = pp->head;
	while(p!=NULL){
		a=p->data;
		if(!visited[a])
			double_graph_dfsUTIL(g,a,visited,n);
		p=p->next;
	}
}

void double_graph_dfs(double_graph_list* g,int a,int V){
	int visited[V];
	for(int i=0;i<V;i++){
		visited[i]=0;
	}
	double_graph_dfsUTIL(g,a,visited,V);
}
