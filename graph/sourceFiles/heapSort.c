void swap(int* a, int *b);
void minHeapDown(int* heap, int* index, int n,int c);
void minHeapBuild(int* arr, int* index, int n);
void minHeapPop(int* heap,int* index, int* value, int* indexterm, int* n);
void heapSort(int* heap, int* index, int n);
void minHeapUp(int* heap, int* index, int c );
void minHeapPush(int* heap, int* index,  int* n, int data, int indexterm);

void swap(int* a, int *b)  {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void minHeapUp(int* heap, int* index, int c )  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(heap[c]<heap[p])  {
		swap(&heap[c],&heap[p]);
		swap(&index[c],&index[p]);
	}	
	minHeapUp(heap, index, p);
}
void minHeapDown(int* heap, int* index, int n,int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  if(l<n) {
		if((r<n) && (heap[r]<heap[l])) {
			if(heap[r]<heap[c])  {
		  	swap(&heap[r],&heap[c]);
		  	swap(&index[r],&index[c]);
		  }
		  minHeapDown(heap,index,n,r);
		}  	
		else	{
		if(heap[l]<heap[c])  {
		  	swap(&heap[l],&heap[c]);
		  	swap(&index[l],&index[c]);		  	
		  }
		  minHeapDown(heap,index,n,l);
		}
	}
	else
		return;		
}
void minHeapBuild(int* arr, int* index, int n)	{
    for (int i = n/2-1; i >= 0; i--) 
        minHeapDown(arr, index, n, i);
}
void minHeapPop(int* heap,int* index, int* value, int* indexterm, int* n)  {
	*value = heap[0];
	*indexterm = index[0];
	heap[0] = heap[(*n)-1];
	index[0] = index[(*n)-1];
	heap[(*n)-1] = 0;
	(*n)--;
	minHeapDown(heap,index,*n,0);
}

void minHeapPush(int* heap, int* index,  int* n, int data, int indexterm)  {
  heap[(*n)] = data;
  index[(*n)] = indexterm;
  (*n)++;
  minHeapUp(heap,index,(*n)-1);
}
