void int_dll_reverse(int_dll* l){
	int_dll_node* current=l->head;
	int_dll_node* next=NULL;
	int_dll_node* prev=NULL;
	int_dll_node* t=l->head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		current->prev=next;
		prev=current;
		current=next;
	}
	l->head=prev;
	l->tail=t;
}
void double_dll_reverse(double_dll* l){
	double_dll_node* current=l->head;
	double_dll_node* next=NULL;
	double_dll_node* prev=NULL;
	double_dll_node* t=l->head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		current->prev=next;
		prev=current;
		current=next;
	}
	l->head=prev;
	l->tail=t;
}
void float_dll_reverse(float_dll* l){
	float_dll_node* current=l->head;
	float_dll_node* next=NULL;
	float_dll_node* prev=NULL;
	float_dll_node* t=l->head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		current->prev=next;
		prev=current;
		current=next;
	}
	l->head=prev;
	l->tail=t;
}
void char_dll_reverse(char_dll* l){
	char_dll_node* current=l->head;
	char_dll_node* next=NULL;
	char_dll_node* prev=NULL;
	char_dll_node* t=l->head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		current->prev=next;
		prev=current;
		current=next;
	}
	l->head=prev;
	l->tail=t;
	}
void string_dll_reverse(string_dll* l){
	string_dll_node* current=l->head;
	string_dll_node* next=NULL;
	string_dll_node* prev=NULL;
	string_dll_node* t=l->head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		current->prev=next;
		prev=current;
		current=next;
	}
	l->head=prev;
	l->tail=t;
}
