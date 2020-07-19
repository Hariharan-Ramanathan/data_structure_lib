void int_dll_print_in_reverse(int_dll* l){
	int_dll_node* p=l->tail;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->prev;
	}
}
void double_dll_print_in_reverse(double_dll* l){
	double_dll_node* p=l->tail;
	while(p!=NULL){
		printf("%lf ",p->data);
		p=p->prev;
	}
}
void float_dll_print_in_reverse(float_dll* l){
	float_dll_node* p=l->tail;
	while(p!=NULL){
		printf("%f ",p->data);
		p=p->prev;
	}
}
void char_dll_print_in_reverse(char_dll* l){
	char_dll_node* p=l->tail;
	while(p!=NULL){
		printf("%c ",p->data);
		p=p->prev;
	}
}
void string_dll_print_in_reverse(string_dll* l){
	string_dll_node* p=l->tail;
	while(p!=NULL){
		printf("%s ",p->data);
		p=p->prev;
	}
}

