typedef struct int_list int_stack,int_queue;

int_stack* create_int_list();
void int_stack_push(int_stack* ,int);
int int_stack_pop(int_stack*);
int int_stack_get_top(int_stack*);
int int_stack_is_empty(int_stack*);
 