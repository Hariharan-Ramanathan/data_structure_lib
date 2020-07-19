#include <stdio.h>
#include <stdlib.h>
#include "../dsa.h"

double_heapf dh;
int_heapf ih;
float_heapf fh;
char_heapf ch;

#define ih import_int_heapf
void main() {
    int * p;
    p =(int[9]){8,5,4,7,9,2,6,3,1};
    int n = 9;
    
  int_heap* hd = ih.create(p, &n, "max");

    ih.build(hd);
    ih.print(hd);
    printf("%d... ",ih.pop(hd));
    ih.print(hd);
    printf("%d... ",ih.pop(hd));
    ih.print(hd);
    printf("%d... ",ih.pop(hd));
    ih.print(hd);
    printf("%d... ",ih.pop(hd));
    ih.print(hd);
    printf("%d... ",ih.pop(hd));
}
