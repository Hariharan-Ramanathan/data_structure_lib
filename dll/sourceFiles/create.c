int_dll* create_int_dll(){
	int_dll* temp=malloc(sizeof(int_dll));
	temp->head=NULL;
	temp->tail=NULL;
	temp->count=0;
	return temp;
}
double_dll* create_double_dll(){
	double_dll* temp=malloc(sizeof(double_dll));
	temp->head=NULL;
	temp->tail=NULL;
	temp->count=0;
	return temp;
}
float_dll* create_float_dll(){
	float_dll* temp=malloc(sizeof(float_dll));
	temp->head=NULL;
	temp->tail=NULL;
	temp->count=0;
	return temp;
}
char_dll* create_char_dll(){
	char_dll* temp=malloc(sizeof(char_dll));
	temp->head=NULL;
	temp->tail=NULL;
	temp->count=0;
	return temp;
}
string_dll* create_string_dll(){
	string_dll* temp=malloc(sizeof(string_dll));
	temp->head=NULL;
	temp->tail=NULL;
	temp->count=0;
	return temp;
}

