int_bst_node *int_avl_new_node(int data) { 
	int_bst_node *temp = (int_bst_node*)malloc(sizeof(int_bst_node)); 
	temp->data = data;
	temp->height = 1;
	temp->left = temp->right = NULL;
	return temp; 
} 
 
float_bst_node *float_avl_new_node(float data) { 
	float_bst_node *temp = (float_bst_node*)malloc(sizeof(float_bst_node)); 
	temp->data = data;
	temp->height = 1;
	temp->left = temp->right = NULL;
	return temp; 
} 

double_bst_node *double_avl_new_node(double data) { 
	double_bst_node *temp = (double_bst_node*)malloc(sizeof(double_bst_node)); 
	temp->data = data;
	temp->height = 1;
	temp->left = temp->right = NULL;
	return temp; 
} 