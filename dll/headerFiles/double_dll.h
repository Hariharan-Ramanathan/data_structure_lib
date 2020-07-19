typedef struct double_dll_node double_dll_node;
typedef struct double_dll double_dll;

double_dll* create_double_dll();
double_dll_node* double_dll_new_node(double);
void double_dll_print(double_dll*);
void double_dll_print_in_reverse(double_dll*);
void double_dll_print_in_reverve_recursive_part(double_dll_node* head);
void double_dll_push(double_dll*, double data);
void double_dll_shift(double_dll*, double data);
double double_dll_pop(double_dll* tail);
double double_dll_unshift(double_dll*);
void double_dll_reverse(double_dll*);
void double_dll_insert(double_dll*, int,double);
double double_dll_delete(double_dll*,int);

struct double_dll_node {
 double data;
 double_dll_node *next;
 double_dll_node *prev;

};
struct double_dll{
	double_dll_node* head;
	double_dll_node* tail;
	int count;
};


