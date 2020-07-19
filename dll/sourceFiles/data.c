int int_dll_data(int_dll* l,int pos){
	if(pos<=l->count){
		int_dll_node* p=l->head;
		for(int i=0;i<pos;i++)
			p=p->next;
		return p->data;
	}
	return -1;
}
double int_dll_data(double_dll* l,int pos){
	if(pos<=l->count){
		double_dll_node* p=l->head;
		for(int i=0;i<pos;i++)
			p=p->next;
		return p->data;
	}
	return -1;
}
float float_dll_data(float_dll* l,int pos){
	if(pos<=l->count){
		float_dll_node* p=l->head;
		for(int i=0;i<pos;i++)
			p=p->next;
		return p->data;
	}
	return -1;
}
int char_dll_data(char_dll* l,int pos){
	if(pos<=l->count){
		char_dll_node* p=l->head;
		for(int i=0;i<pos;i++)
			p=p->next;
		return p->data;
	}
	return -1;
}
int string_dll_data(string_dll* l,int pos){
	if(pos<=l->count){
		string_dll_node* p=l->head;
		for(int i=0;i<pos;i++)
			p=p->next;
		return p->data;
	}
	return -1;
}

