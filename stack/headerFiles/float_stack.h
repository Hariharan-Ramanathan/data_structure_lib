typedef struct float_list float_stack, float_queue;

float_stack* create_float_stack();
void float_stack_push(float_stack* ,float);
float float_stack_pop(float_stack*);
float float_stack_get_top(float_stack*);
float float_stack_is_empty(float_stack*);
