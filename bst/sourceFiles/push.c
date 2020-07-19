void int_bst_push(int_bst_node** node,int data){
	
	if(*node==NULL){
		(*node)=int_bst_new_node(data);
	}else if(data < (*node)->data)
		int_bst_push(&((*node)->left),data);
	else
		int_bst_push(&((*node)->right),data);

}
void double_bst_push(double_bst_node** node,double data){
	
	if(*node==NULL){
		(*node)=double_bst_new_node(data);
	}else if(data < (*node)->data)
		double_bst_push(&((*node)->left),data);
	else
		double_bst_push(&((*node)->right),data);

}
void float_bst_push(float_bst_node** node,float data){
	
	if(*node==NULL){
		(*node)=float_bst_new_node(data);
	}else if(data < (*node)->data)
		float_bst_push(&((*node)->left),data);
	else
		float_bst_push(&((*node)->right),data);

}

