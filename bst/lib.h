typedef struct int_bstf int_bstf;
typedef struct double_bstf double_bstf;
typedef struct float_bstf float_bstf;
typedef struct char_bstf char_bstf;
typedef struct string_bstf string_bstf;

struct int_bstf {
    int_bst_node* (*create)();
    void (*preorder)(int_bst_node*);
    void (*postorder)(int_bst_node*);
    void (*inorder)(int_bst_node*);
    void (*push)(int_bst_node**,int);
    void (*pop)(int_bst_node**,int);    

};

struct int_bstf import_int_bstf= {
    create_int_bst,
    int_bst_print_preorder,
    int_bst_print_postorder,
    int_bst_print_inorder,
    int_bst_push,
    int_bst_pop,
};

struct double_bstf {
    double_bst_node* (*create)();
    void (*preorder)(double_bst_node*);
    void (*postorder)(double_bst_node*);
    void (*inorder)(double_bst_node*);
    void (*push)(double_bst_node**,double);
   void (*pop)(double_bst_node**,double); 
    
};

struct double_bstf import_double_bstf= {
    create_double_bst,
    double_bst_print_preorder,
    double_bst_print_postorder,
    double_bst_print_inorder,
    double_bst_push,
    double_bst_pop,
};

struct float_bstf {
    float_bst_node* (*create)();
    void (*preorder)(float_bst_node*);
    void (*postorder)(float_bst_node*);
    void (*inorder)(float_bst_node*);
    void (*push)(float_bst_node**,float);
    void (*pop)(float_bst_node**,float); 
};

struct float_bstf import_float_bstf= {
    create_float_bst,
    float_bst_print_preorder,
    float_bst_print_postorder,
    float_bst_print_inorder,
    float_bst_push,
    float_bst_pop,
};