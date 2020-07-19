int int_queue_dequeue(int_queue* front){
	int_list_unshift(front);
}

float float_queue_dequeue(float_queue* front){
	float_list_unshift(front);
}

double double_queue_dequeue(double_queue* front){
	double_list_unshift(front);
}