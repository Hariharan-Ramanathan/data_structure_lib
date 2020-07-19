typedef struct int_graphf int_graphf;
typedef struct float_graphf float_graphf;
typedef struct double_graphf double_graphf;

struct int_graphf{
    int_graph_list* (*create)(int);
    void (*addEdge)(int_graph_list*, int, int, int);
    void (*print)(int_graph_list*);
    void (*dfs)(int_graph_list*, int, int);
    void (*bfs)(int_graph_list*, int, int);
    void (*dijkstra)(int_graph_list*, int, int, int*);
 
};

struct int_graphf import_int_graphf={
    int_graph_create,
    int_graph_add_edge,
    int_graph_print,
    int_graph_dfs,
    int_graph_bfs,
    int_graph_dijkstra,
}; 

struct float_graphf{
    float_graph_list* (*create)(int);
    void (*addEdge)(float_graph_list*, int, int, float);
    void (*print)(float_graph_list*);
    void (*dfs)(float_graph_list*, int, int);
    void (*bfs)(float_graph_list*, int, int);

};

struct float_graphf import_float_graphf={
    float_graph_create,
    float_graph_add_edge,
    float_graph_print,
    float_graph_dfs,
    float_graph_bfs,
}; 

struct double_graphf{
    double_graph_list* (*create)(int);
    void (*addEdge)(double_graph_list*, int, int, double);
    void (*print)(double_graph_list*);
    void (*dfs)(double_graph_list*, int, int);
    void (*bfs)(double_graph_list*, int, int);

};

struct double_graphf import_double_graphf={
    double_graph_create,
    double_graph_add_edge,
    double_graph_print,
    double_graph_dfs,
    double_graph_bfs,
}; 