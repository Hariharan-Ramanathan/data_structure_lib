typedef struct float_list float_list;
typedef struct float_graph_node float_graph_node;
typedef struct float_graph_list float_graph_list;

float_graph_list* float_graph_create(int );
void float_graph_add_edge(float_graph_list*, int, int, float);
void float_graph_prfloat(float_graph_list*);
void float_graph_dfs(float_graph_list*, int, int);
void float_graph_bfs(float_graph_list*, int, int);


struct float_graph_node{
	int_list* graph;
	float_list* weight;
};  
struct float_graph_list{
	int V;
	float_graph_node* list;
};
