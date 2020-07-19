void int_graph_add_edge(int_graph_list* g, int s, int t,int weight)	{
	int_list_push(g->list[s].graph,t);
	int_list_push(g->list[s].weight,weight);
}

void float_graph_add_edge(float_graph_list* g, int s, int t,float weight)	{
	int_list_push(g->list[s].graph,t);
	float_list_push(g->list[s].weight,weight);
}

void double_graph_add_edge(double_graph_list* g, int s, int t,double weight)	{
	int_list_push(g->list[s].graph,t);
	double_list_push(g->list[s].weight,weight);
}
