
void int_avl_push(int_bst_node** Node, int data)  { 
	if (*Node == NULL) 
	     (*Node) = int_avl_new_node(data); 
	else if (data < (*Node)->data) 
		int_avl_push(&((*Node)->left), data); 
	else 
		int_avl_push(&((*Node)->right), data);
		
  (*Node)->height = 1 + int_max(int_avl_height((*Node)->left), int_avl_height((*Node)->right)); 
  int balance = int_avl_get_balance(*Node); 

  if (balance > 1 && data < (*Node)->left->data)  {
      int_avl_right_rotate(Node);
  }    
  if (balance < -1 && data > (*Node)->right->data) {
      int_avl_left_rotate(Node); 
  }
  if (balance > 1 && data > (*Node)->left->data)
  { 
      int_avl_left_rotate(&((*Node)->left)); 
      int_avl_right_rotate(Node); 
  } 
  if (balance < -1 && data < (*Node)->right->data) 
  { 
      int_avl_right_rotate(&((*Node)->right)); 
      int_avl_left_rotate(Node);
  } 
}



void double_avl_push(double_bst_node** Node, double data)  { 
	if (*Node == NULL) 
	     (*Node) = double_avl_new_node(data); 
	else if (data < (*Node)->data) 
		double_avl_push(&((*Node)->left), data); 
	else 
		double_avl_push(&((*Node)->right), data);
		
  (*Node)->height = 1 + double_max(double_avl_height((*Node)->left), double_avl_height((*Node)->right)); 
  double balance = double_avl_get_balance(*Node); 
 
  if (balance > 1 && data < (*Node)->left->data)  {
      double_avl_right_rotate(Node);
  }    
  if (balance < -1 && data > (*Node)->right->data) {
      double_avl_left_rotate(Node); 
  }
  if (balance > 1 && data > (*Node)->left->data)
  { 
      double_avl_left_rotate(&((*Node)->left)); 
      double_avl_right_rotate(Node); 
  } 
  if (balance < -1 && data < (*Node)->right->data) 
  { 
      double_avl_right_rotate(&((*Node)->right)); 
      double_avl_left_rotate(Node);
  } 
}




void float_avl_push(float_bst_node** Node, float data)  { 
	if (*Node == NULL) 
	     (*Node) = float_avl_new_node(data); 
	else if (data < (*Node)->data) 
		float_avl_push(&((*Node)->left), data); 
	else 
		float_avl_push(&((*Node)->right), data);
		
  (*Node)->height = 1 + float_max(float_avl_height((*Node)->left), float_avl_height((*Node)->right)); 
  float balance = float_avl_get_balance(*Node); 

  if (balance > 1 && data < (*Node)->left->data)  {
      float_avl_right_rotate(Node);
  }    
  if (balance < -1 && data > (*Node)->right->data) {
      float_avl_left_rotate(Node); 
  }
  if (balance > 1 && data > (*Node)->left->data)
  { 
      float_avl_left_rotate(&((*Node)->left)); 
      float_avl_right_rotate(Node); 
  } 
  if (balance < -1 && data < (*Node)->right->data) 
  { 
      float_avl_right_rotate(&((*Node)->right)); 
      float_avl_left_rotate(Node);
  } 
}
