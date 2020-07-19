void int_bst_print_postorder(int_bst_node* root){
	if(root!=NULL){
		int_bst_print_postorder(root->left);
		int_bst_print_postorder(root->right);
		printf("%d ",root->data);
	}
}

void double_bst_print_postorder(double_bst_node* root){
	if(root!=NULL){
		double_bst_print_postorder(root->left);
		double_bst_print_postorder(root->right);
		printf("%lf ",root->data);
	}
}

void float_bst_print_postorder(float_bst_node* root){
	if(root!=NULL){
		float_bst_print_postorder(root->left);
		float_bst_print_postorder(root->right);
		printf("%f ",root->data);
	}
}

