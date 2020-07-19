typedef struct int_heapf int_heapf;
typedef struct double_heapf double_heapf;
typedef struct float_heapf float_heapf;
typedef struct char_heapf char_heapf;
typedef struct string_heapf string_heapf;

struct double_heapf  {
double_heap* (*create)(double*, int*, char*);
void (*up)(double_heap*, int);
void (*down)(double_heap*, int);
void (*build)(double_heap*);
void (*push)(double_heap*, double);
double (*pop)(double_heap*);
void (*print)(double_heap*);
};

struct double_heapf import_double_heapf={
    double_heap_create,
    double_heap_up,
    double_heap_down,
    double_heap_build,
    double_heap_push,
    double_heap_pop,
    double_heap_print,

};

struct int_heapf  {
int_heap* (*create)(int*, int*, char*);
void (*up)(int_heap*, int);
void (*down)(int_heap*, int);
void (*build)(int_heap*);
void (*push)(int_heap*, int);
int (*pop)(int_heap*);
void (*print)(int_heap*);
};

struct int_heapf import_int_heapf={
    int_heap_create,
    int_heap_up,
    int_heap_down,
    int_heap_build,
    int_heap_push,
    int_heap_pop,
    int_heap_print,

};
struct float_heapf  {
float_heap* (*create)(float*, int*, char*);
void (*up)(float_heap*, int);
void (*down)(float_heap*, int);
void (*build)(float_heap*);
void (*push)(float_heap*, float);
float (*pop)(float_heap*);
void (*print)(float_heap*);
};

struct float_heapf import_float_heapf={
    float_heap_create,
    float_heap_up,
    float_heap_down,
    float_heap_build,
    float_heap_push,
    float_heap_pop,
    float_heap_print,

};

struct char_heapf  {
char_heap* (*create)(char*, int*, char*);
void (*up)(char_heap*, int);
void (*down)(char_heap*, int);
void (*build)(char_heap*);
void (*push)(char_heap*, char);
char (*pop)(char_heap*);
void (*print)(char_heap*);
};


struct char_heapf import_char_heapf={
    char_heap_create,
    char_heap_up,
    char_heap_down,
    char_heap_build,
    char_heap_push,
    char_heap_pop,
    char_heap_print,

};

