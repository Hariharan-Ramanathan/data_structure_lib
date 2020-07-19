typedef struct float_heap float_heap;

void float_heap_up(float_heap*, int);
void float_heap_down(float_heap*, int);
void float_heap_build(float_heap*);
void float_heap_push(float_heap*, float);
float float_heap_pop(float_heap*);
void float_heap_print(float_heap*);


struct float_heap {
    float* heap;
    int* count;
    char* type;
};