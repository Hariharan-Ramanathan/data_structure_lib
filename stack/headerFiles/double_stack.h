typedef struct double_list double_stack, double_queue;

double_stack* create_double_stack();
void double_stack_push(double_stack* ,double);
double double_stack_pop(double_stack*);
double double_stack_get_top(double_stack*);
double double_stack_is_empty(double_stack*);
