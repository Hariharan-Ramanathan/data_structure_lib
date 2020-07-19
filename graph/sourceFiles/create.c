int_graph_list* int_graph_create(int n)	{
	int_graph_list* g = malloc(sizeof(int_graph_list));
	g->list = malloc(sizeof(int_graph_node)*n);
	for(int i=0; i<n; i++)	{
		g->list[i].graph = create_int_list();
		g->list[i].weight = create_int_list();
	}
	g->V = n;
	return g;
}

float_graph_list* float_graph_create(int n)	{
	float_graph_list* g = malloc(sizeof(float_graph_list));
	g->list = malloc(sizeof(float_graph_node)*n);
	for(int i=0; i<n; i++)	{
		g->list[i].graph = create_int_list();
		g->list[i].weight = create_float_list();
	}
	g->V = n;
	return g;
}

double_graph_list* double_graph_create(int n)	{
	double_graph_list* g = malloc(sizeof(double_graph_list));
	g->list = malloc(sizeof(double_graph_node)*n);
	for(int i=0; i<n; i++)	{
		g->list[i].graph = create_int_list();
		g->list[i].weight = create_double_list();
	}
	g->V = n;
	return g;
}