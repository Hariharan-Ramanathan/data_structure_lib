typedef struct int_listf int_listf;
typedef struct double_listf double_listf;
typedef struct float_listf float_listf;
typedef struct char_listf char_listf;
typedef struct string_listf string_listf;

struct int_listf {
    int_list* (*create)();
    void (*print)(int_list*);
    void (*print_in_reverse)(int_list*);
    void (*push)(int_list*, int data);
    void (*add)(int_list*, int data);
    int (*pop)(int_list* tail);
    int (*remove)(int_list*);
    void (*reverse)(int_list*);
    void (*insert)(int_list*, int,int);
    int (*delete)(int_list*,int);
    int (*data)(int_list*, int);
};
struct int_listf import_int_listf = {
    create_int_list,
    int_list_print,
    int_list_print_in_reverse,
    int_list_push,
    int_list_shift,
    int_list_pop,
    int_list_unshift,
    int_list_reverse,
    int_list_insert,
    int_list_delete,
    int_list_data,
};

struct double_listf {
    double_list* (*create)();
    void (*print)(double_list*);
    void (*print_in_reverse)(double_list*);
    void (*push)(double_list*, double data);
    void (*add)(double_list*, double data);
    double (*pop)(double_list* tail);
    double (*remove)(double_list*);
    void (*reverse)(double_list*);
    void (*insert)(double_list*, int,double);
    int (*delete)(double_list*,int);
    double (*data)(double_list*,int);
};

struct double_listf import_double_listf = {
    create_double_list,
    double_list_print,
    double_list_print_in_reverse,
    double_list_push,
    double_list_shift,
    double_list_pop,
    double_list_unshift,
    double_list_reverse,
    double_list_insert,
    double_list_delete,
    double_list_data,
};

struct float_listf {
    float_list* (*create)();
    void (*print)(float_list*);
    void (*print_in_reverse)(float_list*);
    void (*push)(float_list*, float data);
    void (*add)(float_list*, float data);
    float (*pop)(float_list* tail);
    float (*remove)(float_list*);
    void (*reverse)(float_list*);
    void (*insert)(float_list*, int,float);
    int (*delete)(float_list*,int);
    float (*data)(float_list*, int);
};


struct float_listf import_float_listf = {
    create_float_list,
    float_list_print,
    float_list_print_in_reverse,
    float_list_push,
    float_list_shift,
    float_list_pop,
    float_list_unshift,
    float_list_reverse,
    float_list_insert,
    float_list_delete,
    float_list_data,
};

struct char_listf {
    char_list* (*create)();
    void (*print)(char_list*);
    void (*print_in_reverse)(char_list*);
    void (*push)(char_list*, char data);
    void (*add)(char_list*, char data);
    char (*pop)(char_list* tail);
    char (*remove)(char_list*);
    void (*reverse)(char_list*);
    void (*insert)(char_list*, int,char);
    int (*delete)(char_list*,int);
    char (*data)(char_list*, int);
};


struct char_listf import_char_listf = {
    create_char_list,
    char_list_print,
    char_list_print_in_reverse,
    char_list_push,
    char_list_shift,
    char_list_pop,
    char_list_unshift,
    char_list_reverse,
    char_list_insert,
    char_list_delete,
    char_list_data,
};


struct string_listf {
    string_list* (*create)();
    void (*print)(string_list*);
    void (*print_in_reverse)(string_list*);
    void (*push)(string_list*, char* data);
    void (*add)(string_list*, char* data);
    char* (*pop)(string_list* tail);
    char* (*remove)(string_list*);
    void (*reverse)(string_list*);
    void (*insert)(string_list*, int,char*);
    int (*delete)(string_list*,int);
    char* (*data)(string_list*,int);
};


struct string_listf import_string_listf = {
    create_string_list,
    string_list_print,
    string_list_print_in_reverse,
    string_list_push,
    string_list_shift,
    string_list_pop,
    string_list_unshift,
    string_list_reverse,
    string_list_insert,
    string_list_delete,
    string_list_data,
};
