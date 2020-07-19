typedef struct char_heap char_heap;

void char_heap_up(char_heap*, int);
void char_heap_down(char_heap*, int);
void char_heap_build(char_heap*);
void char_heap_push(char_heap*, char);
char char_heap_pop(char_heap*);
void char_heap_print(char_heap*);


struct char_heap {
    char* heap;
    int* count;
    char* type;
};