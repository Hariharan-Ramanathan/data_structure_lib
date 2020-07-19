void double_heap_print(double_heap* h)  {
	for(int i=0; i<*(h->count); i++) {
		printf("%lf ",(h->heap)[i]);
	}
	printf("\n");
}

void int_heap_print(int_heap* h)  {
	for(int i=0; i<*(h->count); i++) {
		printf("%d ",(h->heap)[i]);
	}
	printf("\n");
}

void float_heap_print(float_heap* h)  {
	for(int i=0; i<*(h->count); i++) {
		printf("%f ",(h->heap)[i]);
	}
	printf("\n");
}

void char_heap_print(char_heap* h)  {
	for(int i=0; i<*(h->count); i++) {
		printf("%c ",(h->heap)[i]);
	}
	printf("\n");
}

