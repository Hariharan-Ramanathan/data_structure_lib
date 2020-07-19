#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"

int main(){
    struct int_stackf l = import_int_stackf;
    int_stack* s=l.create();
    l.push(s, 1);
    l.push(s, 2);
    l.push(s, 3);
    if(!l.isEmpty(s))
    printf("top = %d\n",l.getTop(s));

    return 0;
}