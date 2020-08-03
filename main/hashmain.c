#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"

int main(){
    int n = 5;
    struct int_hashf h = import_int_hashf;
    int_hash* hash = h.create(n);

    h.insert(hash, 5, n);
    h.insert(hash, 20, n);
    h.insert(hash, 100, n);
    if(h.find(hash, 100, n))
        printf("present\n");
    h.delete(hash, 100, n);
    if(! h.find(hash, 100, n))
        printf("not present\n");
    return 0;
}