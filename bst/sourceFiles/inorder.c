void int_bst_print_inorder(int_bst_node* root){

	if(root!=NULL){
		int_bst_print_inorder(root->left);
		printf("%d ",root->data);
		int_bst_print_inorder(root->right);
	}
}

void double_bst_print_inorder(double_bst_node* root){

	if(root!=NULL){
		double_bst_print_inorder(root->left);
		printf("%d ",root->data);
		double_bst_print_inorder(root->right);
	}
}

void float_bst_print_inorder(float_bst_node* root){

	if(root!=NULL){
		float_bst_print_inorder(root->left);
		printf("%d ",root->data);
		float_bst_print_inorder(root->right);
	}
}

