typedef struct int_stackf int_stackf;
typedef struct float_stackf float_stackf;
typedef struct double_stackf double_stackf;

struct int_stackf {
    int_stack* (*create)();
    void (*push)(int_stack* ,int);
    int (*pop)(int_stack*);
    int (*getTop)(int_stack*);
    int (*isEmpty)(int_stack*);
};

struct int_stackf import_int_stackf ={
    create_int_list,
    int_stack_push,
    int_stack_pop,
    int_stack_get_top,
    int_stack_is_empty,
};

struct float_stackf {
    float_stack* (*create)();
    void (*push)(float_stack* ,float);
    float (*pop)(float_stack*);
    float (*getTop)(float_stack*);
    float (*isEmpty)(float_stack*);
};

struct float_stackf import_float_stackf ={
    create_float_list,
    float_stack_push,
    float_stack_pop,
    float_stack_get_top,
    float_stack_is_empty,
};


struct double_stackf {
    double_stack* (*create)();
    void (*push)(double_stack* ,double);
    double (*pop)(double_stack*);
    double (*getTop)(double_stack*);
    double (*isEmpty)(double_stack*);
};

struct double_stackf import_double_stackf ={
    create_double_list,
    double_stack_push,
    double_stack_pop,
    double_stack_get_top,
    double_stack_is_empty,
};