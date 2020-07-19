void int_queue_enqueue(int_queue* front,int data){
	int_list_push(front,data);
}

void float_queue_enqueue(float_queue* front,float data){
	float_list_push(front,data);
}

void double_queue_enqueue(double_queue* front,double data){
	double_list_push(front,data);
}