void int_bst_pop(int_bst_node** root,int data){

	if(*root==NULL)
		return ;
	if(data < (*root)->data)
		int_bst_pop(&((*root)->left),data);			
	else if(data > (*root)->data)
		int_bst_pop(&((*root)->right),data);
	
	else{
		if((*root)->left ==NULL)
			(*root)=(*root)->right;
		else if((*root)->right==NULL)
			(*root)=(*root)->left;
		else{

		if((*root)->left!=NULL){
			int_bst_node* temp= *root;
			(temp)=(temp)->left;
		
			while((temp)->right != NULL)
				(temp)=(temp)->right;

			(*root)->data=temp->data;
			int_bst_pop(&(*root)->left,temp->data);			
		
	}
		else{
			int_bst_node* temp=*root;
			(temp)=(temp)->right;
	
			while((temp)->left !=NULL)
				(temp)=(temp)->left;
	
			(*root)->data=temp->data;
			int_bst_pop(&(*root)->right,temp->data);
			}
		}

	}
}

void double_bst_pop(double_bst_node** root,double data){

	if(*root==NULL)
		return ;
	if(data < (*root)->data)
		double_bst_pop(&((*root)->left),data);			
	else if(data > (*root)->data)
		double_bst_pop(&((*root)->right),data);
	
	else{
		if((*root)->left ==NULL)
			(*root)=(*root)->right;
		else if((*root)->right==NULL)
			(*root)=(*root)->left;
		else{

		if((*root)->left!=NULL){
			double_bst_node* temp= *root;
			(temp)=(temp)->left;
		
			while((temp)->right != NULL)
				(temp)=(temp)->right;

			(*root)->data=temp->data;
			double_bst_pop(&(*root)->left,temp->data);			
		
	}
		else{
			double_bst_node* temp=*root;
			(temp)=(temp)->right;
	
			while((temp)->left !=NULL)
				(temp)=(temp)->left;
	
			(*root)->data=temp->data;
			double_bst_pop(&(*root)->right,temp->data);
			}
		}

	}
}
void float_bst_pop(float_bst_node** root,float data){

	if(*root==NULL)
		return ;
	if(data < (*root)->data)
		float_bst_pop(&((*root)->left),data);			
	else if(data > (*root)->data)
		float_bst_pop(&((*root)->right),data);
	
	else{
		if((*root)->left ==NULL)
			(*root)=(*root)->right;
		else if((*root)->right==NULL)
			(*root)=(*root)->left;
		else{

		if((*root)->left!=NULL){
			float_bst_node* temp= *root;
			(temp)=(temp)->left;
		
			while((temp)->right != NULL)
				(temp)=(temp)->right;

			(*root)->data=temp->data;
			float_bst_pop(&(*root)->left,temp->data);			
		
	}
		else{
			float_bst_node* temp=*root;
			(temp)=(temp)->right;
	
			while((temp)->left !=NULL)
				(temp)=(temp)->left;
	
			(*root)->data=temp->data;
			float_bst_pop(&(*root)->right,temp->data);
			}
		}

	}
}

