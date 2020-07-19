typedef struct int_bst_node int_bst_node;

int_bst_node* int_bst_create();
int_bst_node* bst_new_node(int);
void int_bst_push(int_bst_node** ,int);
void int_bst_pop(int_bst_node**,int);
void int_preorder(int_bst_node*);
void int_postorder(int_bst_node*);
void int_inorder(int_bst_node*);

struct int_bst_node{
	int data;
	int height;
	int_bst_node* left;
	int_bst_node* right;
};

