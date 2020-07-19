typedef struct int_avlf int_avlf;
typedef struct float_avlf float_avlf;
typedef struct double_avlf double_avlf;

struct int_avlf {
    int (*height)(int_bst_node*);
    int (*balance)(int_bst_node*);
    int_bst_node* (*newnode)(int);
    void (*rotate_right)(int_bst_node**);
    void (*rotate_left)(int_bst_node**);    
    void (*push)(int_bst_node** , int);
};

struct int_avlf import_int_avlf= {
   int_avl_height,
   int_avl_get_balance,
   int_avl_new_node,
   int_avl_right_rotate,
   int_avl_left_rotate,
   int_avl_push,
};

struct float_avlf {
    float (*height)(float_bst_node*);
    float (*balance)(float_bst_node*);
    float_bst_node* (*newnode)(float);
    void (*rotate_right)(float_bst_node**);
    void (*rotate_left)(float_bst_node**);    
    void (*push)(float_bst_node** , float);
};

struct float_avlf import_float_avlf= {
   float_avl_height,
   float_avl_get_balance,
   float_avl_new_node,
   float_avl_right_rotate,
   float_avl_left_rotate,
   float_avl_push,
};


struct double_avlf {
    double (*height)(double_bst_node*);
    double (*balance)(double_bst_node*);
    double_bst_node* (*newnode)(double);
    void (*rotate_right)(double_bst_node**);
    void (*rotate_left)(double_bst_node**);    
    void (*push)(double_bst_node** , double);
};

struct double_avlf import_double_avlf= {
   double_avl_height,
   double_avl_get_balance,
   double_avl_new_node,
   double_avl_right_rotate,
   double_avl_left_rotate,
   double_avl_push,
};