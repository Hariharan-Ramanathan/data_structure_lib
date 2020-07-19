typedef struct double_list double_queue;

double_queue* create_double_list();
void double_queue_enqueue(double_queue*, double);
double double_queue_dequeue(double_queue*);
double double_queue_get_rear(double_queue*);
double double_queue_get_front(double_queue*);
double double_queue_is_empty(double_queue*);