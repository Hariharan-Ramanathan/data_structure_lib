void int_avl_left_rotate(int_bst_node** N)	{ 
    int_bst_node *Nr = (*N)->right; 
    int_bst_node *Nrl = Nr->left; 
    Nr->left = (*N);
    (*N)->right = Nrl;
    (*N) = Nr;
    Nr=(*N)->left;
    //(*N)->right = Nr;
    Nr->height = int_max(int_avl_height(Nr->left), int_avl_height(Nr->right))+1; 
    (*N)->height = int_max(int_avl_height((*N)->left), int_avl_height((*N)->right))+1;   
}

void double_avl_left_rotate(double_bst_node** N)	{ 
    double_bst_node *Nr = (*N)->right; 
    double_bst_node *Nrl = Nr->left; 
    Nr->left = (*N);
    (*N)->right = Nrl;
    (*N) = Nr;
    Nr=(*N)->left;
    //(*N)->right = Nr;
    Nr->height = double_max(double_avl_height(Nr->left), double_avl_height(Nr->right))+1; 
    (*N)->height = double_max(double_avl_height((*N)->left), double_avl_height((*N)->right))+1;   
}


void float_avl_left_rotate(float_bst_node** N)	{ 
    float_bst_node *Nr = (*N)->right; 
    float_bst_node *Nrl = Nr->left; 
    Nr->left = (*N);
    (*N)->right = Nrl;
    (*N) = Nr;
    Nr=(*N)->left;
    //(*N)->right = Nr;
    Nr->height = float_max(float_avl_height(Nr->left), float_avl_height(Nr->right))+1; 
    (*N)->height = float_max(float_avl_height((*N)->left), float_avl_height((*N)->right))+1;   
}