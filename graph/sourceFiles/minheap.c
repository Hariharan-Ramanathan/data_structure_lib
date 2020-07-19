void min_heap_up(int* heap, int c )  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(heap[c]<heap[p])
		swap(&heap[c],&heap[p]);
	min_heap_up(heap, p);
}

void min_heap_down(int* heap,int n,int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  if(l<n) {
		if((r<n) && (heap[r]<heap[l])) {
			if(heap[r]<heap[c])  {
		  	swap(&heap[r],&heap[c]);
		  }
		  min_heap_down(heap,n,r);
		}  	
		else	{
		if(heap[l]<heap[c])  {
		  	swap(&heap[l],&heap[c]);
		  }
		  min_heap_down(heap,n,l);
		}
	}
	else
		return;		
}

void min_heap_build(int* arr, int n)	{
    for (int i = n/2-1; i >= 0; i--) 
        min_heap_down(arr, n, i);
}

void min_heap_push(int* heap, int* n, int data)  {
  heap[(*n)++] = data;
  min_heap_up(heap,(*n)-1);
}

int min_heap_pop(int* heap, int* n)  {
	int temp = heap[0];
	heap[0] = heap[(*n)-1];
	(*n)--;
	min_heap_down(heap,*n,0);
	return temp;
}

void min_heap_pop_at_position(int* arr,int* n,int p){
	arr[--p]=-1;
	min_heap_build(arr,*n);
	int temp=arr[(*n)-1];
	arr[0]=temp;
	(*n)--;
	 min_heap_build(arr,*n);
	
}
