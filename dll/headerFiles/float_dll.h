typedef struct float_dll_node float_dll_node;
typedef struct float_dll float_dll;

float_dll* create_float_dll();
float_dll_node* float_dll_new_node(float);
void float_dll_print(float_dll*);
void float_dll_print_in_reverse(float_dll*);
void float_dll_print_in_reverve_recursive_part(float_dll_node* head);
void float_dll_push(float_dll*, float data);
void float_dll_shift(float_dll*, float data);
float float_dll_pop(float_dll* tail);
float float_dll_unshift(float_dll*);
void float_dll_reverse(float_dll*);
void float_dll_insert(float_dll*, int,float);
float float_dll_delete(float_dll*,int);

struct float_dll_node {
 float data;
 float_dll_node *next;
 float_dll_node *prev;

};
struct float_dll{
	float_dll_node* head;
	float_dll_node* tail;
	int count;
};


