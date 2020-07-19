typedef struct int_list_node int_list_node;
typedef struct int_list int_list;

int_list* create_int_list();
int_list_node* int_list_new_node(int);
void int_list_print(int_list*);
void int_list_print_in_reverse(int_list*);
void int_list_print_in_reverve_recursive_part(int_list_node* head);
void int_list_push(int_list*, int data);
void int_list_shift(int_list*, int data);
int int_list_pop(int_list* tail);
int int_list_unshift(int_list*);
void int_list_reverse(int_list*);
void int_list_insert(int_list*, int,int);
int int_list_delete(int_list*,int);
int int_list_data (int_list*, int);

struct int_list_node   {
    int data;
    int_list_node *next;
};

struct int_list {
    int_list_node* head;
    int_list_node* tail;
    int count;
};
