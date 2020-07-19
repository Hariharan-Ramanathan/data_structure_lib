void double_heap_build(double_heap* h)	{
    int n = *(h->count);
    for (int i = n/2-1; i >= 0; i--) 
        double_heap_down(h, i);
}

void int_heap_build(int_heap* h)	{
    int n = *(h->count);
    for (int i = n/2-1; i >= 0; i--) 
        int_heap_down(h, i);
}

void float_heap_build(float_heap* h)	{
    int n = *(h->count);
    for (int i = n/2-1; i >= 0; i--) 
        float_heap_down(h, i);
}

void char_heap_build(char_heap* h)	{
    int n = *(h->count);
    for (int i = n/2-1; i >= 0; i--) 
        char_heap_down(h, i);
}
