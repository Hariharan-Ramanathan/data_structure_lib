void double_heap_down(double_heap* h, int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  int n = *(h->count);
  double* heap = h->heap;
  char* type = h->type;
  if(l<n) {
		if((r<n) && (double_comparator(heap[r], heap[l], type))) {
			if(double_comparator(heap[r], heap[c], type))  {
		  	double_swap(&heap[r],&heap[c]);
		  }
		  double_heap_down(h,r);
		}  	
		else	{
		if(double_comparator(heap[l], heap[c], type))  {
		  	double_swap(&heap[l], &heap[c]);
		  }
		  double_heap_down(h,l);
		}
	}
	else
		return;		
}

void int_heap_down(int_heap* h, int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  int n = *(h->count);
  int* heap = h->heap;
  char* type = h->type;
  if(l<n) {
		if((r<n) && (int_comparator(heap[r], heap[l], type))) {
			if(int_comparator(heap[r], heap[c], type))  {
		  	int_swap(&heap[r],&heap[c]);
		  }
		  int_heap_down(h,r);
		}  	
		else	{
		if(int_comparator(heap[l], heap[c], type))  {
		  	int_swap(&heap[l], &heap[c]);
		  }
		  int_heap_down(h,l);
		}
	}
	else
		return;		
}

void float_heap_down(float_heap* h, int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  int n = *(h->count);
  float* heap = h->heap;
  char* type = h->type;
  if(l<n) {
		if((r<n) && (float_comparator(heap[r], heap[l], type))) {
			if(float_comparator(heap[r], heap[c], type))  {
		  	float_swap(&heap[r],&heap[c]);
		  }
		  float_heap_down(h,r);
		}  	
		else	{
		if(float_comparator(heap[l], heap[c], type))  {
		  	float_swap(&heap[l], &heap[c]);
		  }
		  float_heap_down(h,l);
		}
	}
	else
		return;		
}

void char_heap_down(char_heap* h, int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  int n = *(h->count);
  char* heap = h->heap;
  char* type = h->type;
  if(l<n) {
		if((r<n) && (char_comparator(heap[r], heap[l], type))) {
			if(char_comparator(heap[r], heap[c], type))  {
		  	char_swap(&heap[r],&heap[c]);
		  }
		  char_heap_down(h,r);
		}  	
		else	{
		if(char_comparator(heap[l], heap[c], type))  {
		  	char_swap(&heap[l], &heap[c]);
		  }
		  char_heap_down(h,l);
		}
	}
	else
		return;		
}


