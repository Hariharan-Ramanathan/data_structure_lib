typedef struct float_bst_node float_bst_node;

float_bst_node* float_bst_create();
float_bst_node* float_bst_new_node(float);
void bst_push(float_bst_node** ,float);
void float_bst_pop(float_bst_node**,float);
void float_preorder(float_bst_node*);
void float_postorder(float_bst_node*);
void float_inorder(float_bst_node*);

struct float_bst_node{
	float data;
	int height;
	float_bst_node* left;
	float_bst_node* right;
};

