typedef struct float_list float_queue;

float_queue* create_float_list();
void float_queue_enqueue(float_queue*, float);
float float_queue_dequeue(float_queue*);
float float_queue_get_rear(float_queue*);
float float_queue_get_front(float_queue*);
float float_queue_is_empty(float_queue*);