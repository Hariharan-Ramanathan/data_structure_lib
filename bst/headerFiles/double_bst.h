typedef struct double_bst_node double_bst_node;

double_bst_node* double_bst_create();
double_bst_node* double_bst_new_node(double);
void double_bst_push(double_bst_node** ,double);
void double_bst_pop(double_bst_node**,double);
void double_preorder(double_bst_node*);
void double_postorder(double_bst_node*);
void double_inorder(double_bst_node*);

struct double_bst_node{
	double data;
	int height;
	double_bst_node* left;
	double_bst_node* right;
};

