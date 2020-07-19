int int_stack_get_top(int_stack* s){
	return (s)->tail->data;
}

float float_stack_get_top(float_stack* s){
	return (s)->tail->data;
}

double double_stack_get_top(double_stack* s){
	return (s)->tail->data;
}