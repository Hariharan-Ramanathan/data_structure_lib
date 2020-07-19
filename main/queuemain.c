#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"

int main(){
    struct int_queuef l =import_int_queuef;
    int_queue* q=l.create();

    l.enqueue(q,1);
    l.enqueue(q,2);
    l.enqueue(q,3);
    l.dequeue(q);
    l.enqueue(q,4);
    if(!l.isEmpty(q))
        printf("front =%d rear = %d\n",l.getFront(q), l.getRear(q));
        

    return 0;
}