typedef struct int_list int_queue;

int_queue* create_int_list();
void int_queue_enqueue(int_queue*, int);
int int_queue_dequeue(int_queue*);
int int_queue_get_rear(int_queue*);
int int_queue_get_front(int_queue*);
int int_queue_is_empty(int_queue*);