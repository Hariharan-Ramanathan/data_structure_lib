typedef struct int_queuef int_queuef;
typedef struct float_queuef float_queuef;
typedef struct double_queuef double_queuef;

struct int_queuef {
    int_queue* (*create)();
    void (*enqueue)(int_queue* ,int);
    int (*dequeue)(int_queue*);
    int (*getRear)(int_queue*);
    int (*getFront)(int_queue*);
    int (*isEmpty)(int_queue*);
};
 
struct int_queuef import_int_queuef ={
    create_int_list,
    int_queue_enqueue,
    int_queue_dequeue,
    int_queue_get_rear,
    int_queue_get_front,
    int_queue_is_empty,
};

struct float_queuef {
    float_queue* (*create)();
    void (*enqueue)(float_queue* ,float);
    float (*dequeue)(float_queue*);
    float (*getRear)(float_queue*);
    float (*getFront)(float_queue*);
    float (*isEmpty)(float_queue*);
};

struct float_queuef import_float_queuef ={
    create_float_list,
    float_queue_enqueue,
    float_queue_dequeue,
    float_queue_get_rear,
    float_queue_get_front,
    float_queue_is_empty,
};


struct double_queuef {
    double_queue* (*create)();
    void (*enqueue)(double_queue* ,double);
    double (*dequeue)(double_queue*);
    double (*getRear)(double_queue*);
    double (*getFront)(double_queue*);
    double (*isEmpty)(double_queue*);
};

struct double_queuef import_double_queuef ={
    create_double_list,
    double_queue_enqueue,
    double_queue_dequeue,
    double_queue_get_rear,
    double_queue_get_front,
    double_queue_is_empty,
};