
int int_avl_get_balance(int_bst_node *N)	{ 
	if (N == NULL) 
		return 0; 
	return int_avl_height(N->left) - int_avl_height(N->right); 
} 


float float_avl_get_balance(float_bst_node *N)	{ 
	if (N == NULL) 
		return 0; 
	return float_avl_height(N->left) - float_avl_height(N->right); 
}


double double_avl_get_balance(double_bst_node *N)	{ 
	if (N == NULL) 
		return 0; 
	return double_avl_height(N->left) - double_avl_height(N->right); 
}
