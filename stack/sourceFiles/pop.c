int int_stack_pop(int_stack* s){
	int a=int_list_pop(s);
	return a;
}
double double_stack_pop(double_stack* s){
	double a=double_list_pop(s);
	return a;
}
float float_stack_pop(float_stack* s){
	float a=float_list_pop(s);
	return a;
}