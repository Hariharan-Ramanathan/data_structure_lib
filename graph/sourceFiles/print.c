void int_graph_print(int_graph_list* g)	{
	for(int i=0; i<g->V; i++)	{
		printf("vertex %d ->  ",i);
		int_list_print(g->list[i].graph);	
		printf("weight %d ->  ",i);
		int_list_print(g->list[i].weight);	
		printf("\n");
	}
}

void float_graph_print(float_graph_list* g)	{
	for(int i=0; i<g->V; i++)	{
		printf("vertex %d ->  ",i);
		int_list_print(g->list[i].graph);	
		printf("weight %d ->  ",i);
		float_list_print(g->list[i].weight);	
		printf("\n");
	}
}

void double_graph_print(double_graph_list* g)	{
	for(int i=0; i<g->V; i++)	{
		printf("vertex %d ->  ",i);
		int_list_print(g->list[i].graph);	
		printf("weight %d ->  ",i);
		double_list_print(g->list[i].weight);	
		printf("\n");
	}
}