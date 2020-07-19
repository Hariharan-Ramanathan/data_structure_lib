void int_bst_print_preorder(int_bst_node* root){

	if(root!=NULL){
	printf("%d ",root->data);
	int_bst_print_preorder(root->left);
	int_bst_print_preorder(root->right);
	}

}

void double_bst_print_preorder(double_bst_node* root){

	if(root!=NULL){
	printf("%d ",root->data);
	double_bst_print_preorder(root->left);
	double_bst_print_preorder(root->right);
	}

}

void float_bst_print_preorder(float_bst_node* root){

	if(root!=NULL){
	printf("%d ",root->data);
	float_bst_print_preorder(root->left);
	float_bst_print_preorder(root->right);
	}

}

