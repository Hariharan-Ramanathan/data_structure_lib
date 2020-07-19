double double_heap_pop(double_heap* h)  {
	double temp = (h->heap)[0];
    int* n = (h->count);
	(h->heap)[0] = (h->heap)[(*n)-1];
	(*n)--;
	double_heap_down(h,0);
	return temp;
}

int int_heap_pop(int_heap* h)  {
	int temp = (h->heap)[0];
    int* n = (h->count);
	(h->heap)[0] = (h->heap)[(*n)-1];
	(*n)--;
	int_heap_down(h,0);
	return temp;
}

float float_heap_pop(float_heap* h)  {
	float temp = (h->heap)[0];
    int* n = (h->count);
	(h->heap)[0] = (h->heap)[(*n)-1];
	(*n)--;
	float_heap_down(h,0);
	return temp;
}

char char_heap_pop(char_heap* h)  {
	char temp = (h->heap)[0];
    int* n = (h->count);
	(h->heap)[0] = (h->heap)[(*n)-1];
	(*n)--;
	char_heap_down(h,0);
	return temp;
}
