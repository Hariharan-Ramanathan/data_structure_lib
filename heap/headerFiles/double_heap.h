typedef struct double_heap double_heap;

void double_heap_up(double_heap*, int);
void double_heap_down(double_heap*, int);
void double_heap_build(double_heap*);
void double_heap_push(double_heap*, double);
double double_heap_pop(double_heap*);
void double_heap_print(double_heap*);


struct double_heap {
    double* heap;
    int* count;
    char* type;
};