typedef struct double_list double_list;
typedef struct double_graph_node double_graph_node;
typedef struct double_graph_list double_graph_list;

double_graph_list* double_graph_create(int );
void double_graph_add_edge(double_graph_list*, int, int, double);
void double_graph_prdouble(double_graph_list*);
void double_graph_dfs(double_graph_list*, int, int);
void double_graph_bfs(double_graph_list*, int, int);


struct double_graph_node{
	int_list* graph;
	double_list* weight;
};  
struct double_graph_list{
	int V;
	double_graph_node* list;
};
