typedef struct int_dll_node int_dll_node;
typedef struct int_dll int_dll;

int_dll* create_int_dll();
int_dll_node* int_dll_new_node(int);
void int_dll_print(int_dll*);
void int_dll_print_in_reverse(int_dll*);
void int_dll_print_in_reverve_recursive_part(int_dll_node* head);
void int_dll_push(int_dll*, int data);
void int_dll_shift(int_dll*, int data);
int int_dll_pop(int_dll* tail);
int int_dll_unshift(int_dll*);
void int_dll_reverse(int_dll*);
void int_dll_insert(int_dll*, int,int);
int int_dll_delete(int_dll*,int);

struct int_dll_node {
 int data;
 int_dll_node* next;
 int_dll_node* prev;

};
struct int_dll{
	int_dll_node* head;
	int_dll_node* tail;
	int count;
};

