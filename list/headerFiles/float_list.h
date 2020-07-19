typedef struct float_list_node float_list_node;
typedef struct float_list float_list;

float_list* create_float_list();
float_list_node* float_list_new_node(float data);
void float_list_print(float_list*);
void float_list_print_in_reverse(float_list*);
void float_list_print_in_reverve_recursive_part(float_list_node* head);
void float_list_push(float_list*,float data);
void float_list_shift(float_list*, float data);
float float_list_pop(float_list* tail);
float float_list_unshift(float_list*);
void float_list_reverse(float_list*);
void float_list_insert(float_list*, int,float);
int float_list_delete(float_list* ,int);
float float_list_data(float_list*, int);

struct float_list_node   {
    float data;
    float_list_node *next;
};

struct float_list {
    float_list_node* head;
    float_list_node* tail;
    int count;
};
