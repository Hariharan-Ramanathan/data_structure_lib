int int_queue_get_rear(int_queue* node){
	return (node)->tail->data;
}

float float_queue_get_rear(float_queue* node){
	return (node)->tail->data;
}

double double_queue_get_rear(double_queue* node){
	return (node)->tail->data;
}