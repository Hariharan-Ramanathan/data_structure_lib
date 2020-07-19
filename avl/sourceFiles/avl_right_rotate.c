void int_avl_right_rotate(int_bst_node** N)	{ 
    int_bst_node *Nl = (*N)->left;  
    int_bst_node *Nlr = Nl->right; 
     //printf("height of Nl = %d and N is = %d\n",Nl->height,(*N)->height);
    Nl->right = (*N); 
    (*N)->left = Nlr;
    (*N) = Nl;
    Nl=(*N)->right;
    //printf("N is %d and Nl is %d \n",(*N)->data,Nl->data);
    Nl->height = int_max(int_avl_height(Nl->left), int_avl_height(Nl->right))+1;
    (*N)->height = int_max(int_avl_height((*N)->left), int_avl_height((*N)->right))+1;  
    //printf("height of Nl = %d and N is = %d\n",Nl->height,(*N)->height);

} 
void float_avl_right_rotate(float_bst_node** N)	{ 
    float_bst_node *Nl = (*N)->left;  
    float_bst_node *Nlr = Nl->right; 
    Nl->right = (*N); 
    (*N)->left = Nlr;
    (*N) = Nl;
    Nl=(*N)->right;
    //(*N)->right=Nl;
    Nl->height = float_max(float_avl_height(Nl->left), float_avl_height(Nl->right))+1;
    (*N)->height = float_max(float_avl_height((*N)->left), float_avl_height((*N)->right))+1;  
} 

void double_avl_right_rotate(double_bst_node** N)	{ 
    double_bst_node *Nl = (*N)->left;  
    double_bst_node *Nlr = Nl->right; 
    Nl->right = (*N); 
    (*N)->left = Nlr;
    (*N) = Nl;
    Nl=(*N)->right;
    //(*N)->right=Nl;
    Nl->height = double_max(double_avl_height(Nl->left), double_avl_height(Nl->right))+1;
    (*N)->height = double_max(double_avl_height((*N)->left), double_avl_height((*N)->right))+1;  
} 