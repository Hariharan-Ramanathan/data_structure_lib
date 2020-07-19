typedef struct int_list int_list;
typedef struct int_graph_node int_graph_node;
typedef struct int_graph_list int_graph_list;

int_graph_list* int_graph_create(int );
void int_graph_add_edge(int_graph_list*, int, int, int);
void int_graph_print(int_graph_list*);
void int_graph_dfs(int_graph_list*, int, int);
void int_graph_bfs(int_graph_list*,int, int);
void int_graph_dijkstra(int_graph_list*, int, int, int*);


struct int_graph_node{
	int_list* graph;
	int_list* weight;
};  
struct int_graph_list{
	int V;
	int_graph_node* list;
};
