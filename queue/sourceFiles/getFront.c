int int_queue_get_front(int_queue* front){
	return (front)->head->data;
}

float float_queue_get_front(float_queue* front){
	return (front)->head->data;
}

double double_queue_get_front(double_queue* front){
	return (front)->head->data;
}