int int_queue_is_empty(int_queue* node){
	int ans=0;
	if(node->head==NULL)
		ans=1;
	return ans;
}
float float_queue_is_empty(float_queue* node){
	int ans=0;
	if(node->head==NULL)
		ans=1;
	return ans;
}
double double_queue_is_empty(double_queue* node){
	int ans=0;
	if(node->head==NULL)
		ans=1;
	return ans;
}