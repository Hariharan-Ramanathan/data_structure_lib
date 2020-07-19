int int_stack_is_empty(int_stack* s){
int ans=0;
	if(s->head ==NULL)
		ans=1;
	return ans;
}

double double_stack_is_empty(double_stack* s){
double ans=0;
	if(s->head ==NULL)
		ans=1;
	return ans;
}

float float_stack_is_empty(float_stack* s){
float ans=0;
	if(s->head ==NULL)
		ans=1;
	return ans;
}