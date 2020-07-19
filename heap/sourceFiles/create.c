double_heap* double_heap_create(double* heap, int* count, char* type)   {
    double_heap* h = (double_heap*)malloc(sizeof(double_heap));
    h->heap = heap;
    h->count = count;
    h->type = type;
}

int_heap* int_heap_create(int* heap, int* count, char* type)   {
    int_heap* h = (int_heap*)malloc(sizeof(int_heap));
    h->heap = heap;
    h->count = count;
    h->type = type;
}
float_heap* float_heap_create(float* heap, int* count, char* type)   {
    float_heap* h = (float_heap*)malloc(sizeof(float_heap));
    h->heap = heap;
    h->count = count;
    h->type = type;
}

char_heap* char_heap_create(char* heap, int* count, char* type)   {
    char_heap* h = (char_heap*)malloc(sizeof(char_heap));
    h->heap = heap;
    h->count = count;
    h->type = type;
}
