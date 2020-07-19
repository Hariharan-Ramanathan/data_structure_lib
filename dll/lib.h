typedef struct int_dllf int_dllf;
typedef struct double_dllf double_dllf;
typedef struct float_dllf float_dllf;
typedef struct char_dllf char_dllf;
typedef struct string_dllf string_dllf;

struct int_dllf{
    int_dll* (*create)();
    void (*print)(int_dll*);
    void (*print_in_reverse)(int_dll*);
    void (*push)(int_dll*, int data);
    void (*add)(int_dll*, int data);
    int (*pop)(int_dll* tail);
    int (*remove)(int_dll*);
    void (*reverse)(int_dll*);
    void (*insert)(int_dll*, int,int);
    int (*delete)(int_dll*,int);
};
struct int_dllf import_int_dllf= { 
    create_int_dll,
    int_dll_print,
    int_dll_print_in_reverse,
    int_dll_push,
    int_dll_shift,
    int_dll_pop,
    int_dll_unshift,
    int_dll_reverse,
    int_dll_insert,
    int_dll_delete,

};

struct double_dllf {
    double_dll* (*create)();
    void (*print)(double_dll*);
    void (*print_in_reverse)(double_dll*);
    void (*push)(double_dll*, double data);
    void (*add)(double_dll*, double data);
    double (*pop)(double_dll* tail);
    double (*remove)(double_dll*);
    void (*reverse)(double_dll*);
    void (*insert)(double_dll*, int,double);
    double (*delete)(double_dll*,int);
};

struct double_dllf import_double_dllf= { 
    create_double_dll,
    double_dll_print,
    double_dll_print_in_reverse,
    double_dll_push,
    double_dll_shift,
    double_dll_pop,
    double_dll_unshift,
    double_dll_reverse,
    double_dll_insert,
    double_dll_delete,

};
struct float_dllf {
    float_dll* (*create)();
    void (*print)(float_dll*);
    void (*print_in_reverse)(float_dll*);
    void (*push)(float_dll*, float data);
    void (*add)(float_dll*, float data);
    float (*pop)(float_dll* tail);
    float (*remove)(float_dll*);
    void (*reverse)(float_dll*);
    void (*insert)(float_dll*, int,float);
    float (*delete)(float_dll*,int);
};
struct float_dllf import_float_dllf= { 
    create_float_dll,
    float_dll_print,
    float_dll_print_in_reverse,
    float_dll_push,
    float_dll_shift,
    float_dll_pop,
    float_dll_unshift,
    float_dll_reverse,
    float_dll_insert,
    float_dll_delete,

};

struct char_dllf {
    char_dll* (*create)();
    void (*print)(char_dll*);
    void (*print_in_reverse)(char_dll*);
    void (*push)(char_dll*, char data);
    void (*add)(char_dll*, char data);
    char (*pop)(char_dll* tail);
    char (*remove)(char_dll*);
    void (*reverse)(char_dll*);
    void (*insert)(char_dll*, int,char);
    char (*delete)(char_dll*,int);
};

struct char_dllf import_char_dllf= { 
    create_char_dll,
    char_dll_print,
    char_dll_print_in_reverse,
    char_dll_push,
    char_dll_shift,
    char_dll_pop,
    char_dll_unshift,
    char_dll_reverse,
    char_dll_insert,
    char_dll_delete,

};
struct string_dllf {
    string_dll* (*create)();
    void (*print)(string_dll*);
    void (*print_in_reverse)(string_dll*);
    void (*push)(string_dll*, char* data);
    void (*add)(string_dll*, char* data);
    char* (*pop)(string_dll* tail);
    char* (*remove)(string_dll*);
    void (*reverse)(string_dll*);
    void (*insert)(string_dll*, int,char*);
    char* (*delete)(string_dll*,int);
};
struct string_dllf import_string_dllf= { 
    create_string_dll,
    string_dll_print,
    string_dll_print_in_reverse,
    string_dll_push,
    string_dll_shift,
    string_dll_pop,
    string_dll_unshift,
    string_dll_reverse,
    string_dll_insert,
    string_dll_delete,

};