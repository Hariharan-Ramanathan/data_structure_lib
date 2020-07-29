void int_bst_pop(int_bst_node** root,int data){

	if(*root==NULL)
		return ;
	
	if(data < (*root)->data)
		int_bst_pop(&((*root)->left),data);			//search for the node to be deleted
	else if(data > (*root)->data)
		int_bst_pop(&((*root)->right),data);		//search for the node to be deleted
	
	else if((*root)->data == data){					//after reaching the node to be deleted
		if((*root)->left ==NULL ){					//if that node's left is NULL then that node shold be replaced by its right node
			int_bst_node* temp = (*root)->right;
			(*root)=temp;
			}
		
		else if((*root)->right==NULL){
			int_bst_node* temp = (*root)->left;		//if that node's right is NULL then that node should be replaced by its left node
			(*root)=temp;
			}
		
		else{										//if a node having both left and right child need to be deleted , that node data should be either replaced by largest data in left tree of smallest data in right tree
		int val = 0;
		int_bst_node* temp = *root;
													// here i took the smallest data of right tree	
			(temp)=(temp)->right;					// you can also take largest data of left tree , both will maintain the bst
			while((temp)->left !=NULL)
				(temp)=(temp)->left;
			val = (temp)->data;
			(*root)->data = val;					//coping the smallest data of right tree to the node to be deleted
		  int_bst_pop(&((*root)->right),val);		// after copying the node whose value is copied from shouls be removes/deleted so recurse
			
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

			double_bst_node* temp= *root;
			(temp)=(temp)->left;
		
			while((temp)->right != NULL)
				(temp)=(temp)->right;

			(*root)->data=temp->data;
			double_bst_pop(&(*root)->left,temp->data);			
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
			float_bst_node* temp= *root;
			(temp)=(temp)->left;
		
			while((temp)->right != NULL)
				(temp)=(temp)->right;

			(*root)->data=temp->data;
			float_bst_pop(&(*root)->left,temp->data);			
	
		}

	}
}

