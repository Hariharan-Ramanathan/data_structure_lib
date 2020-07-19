typedef struct double_list_node double_list_node;
typedef struct double_list double_list;

double_list* create_double_list();
double_list_node* double_list_new_node(double data);
void double_list_print(double_list*);
void double_list_print_in_reverse(double_list*);
void double_list_print_in_reverve_recursive_part(double_list_node* head);
void double_list_push(double_list*, double data);
void double_list_shift(double_list*, double data);
double double_list_pop(double_list* tail);
double double_list_unshift(double_list*);
void double_list_reverse(double_list*);
void double_list_insert(double_list*, int,double);
int double_list_delete(double_list* ,int);
double double_list_data(double_list*, int);

struct double_list_node   {
    double data;
    double_list_node *next;
};

struct double_list {
    double_list_node* head;
    double_list_node* tail;
    int count;
};
