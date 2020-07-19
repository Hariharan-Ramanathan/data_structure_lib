typedef struct int_heap int_heap;

void int_heap_up(int_heap*, int);
void int_heap_down(int_heap*, int);
void int_heap_build(int_heap*);
void int_heap_push(int_heap*, int);
int int_heap_pop(int_heap*);
void int_heap_print(int_heap*);


struct int_heap {
    int* heap;
    int* count;
    char* type;
};