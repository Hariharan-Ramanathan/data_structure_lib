void double_heap_up(double_heap* dh, int c)  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(double_comparator(dh->heap[c],dh->heap[p], dh->type))
		double_swap(&dh->heap[c],&dh->heap[p]);
	double_heap_up(dh, p);
}

void int_heap_up(int_heap* dh, int c)  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(int_comparator(dh->heap[c],dh->heap[p], dh->type))
		int_swap(&dh->heap[c],&dh->heap[p]);
	int_heap_up(dh, p);
}

void float_heap_up(float_heap* dh, int c)  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(float_comparator(dh->heap[c],dh->heap[p], dh->type))
		float_swap(&dh->heap[c],&dh->heap[p]);
	float_heap_up(dh, p);
}

void char_heap_up(char_heap* dh, int c)  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(char_comparator(dh->heap[c],dh->heap[p], dh->type))
		char_swap(&dh->heap[c],&dh->heap[p]);
	char_heap_up(dh, p);
}
