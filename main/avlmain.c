#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"

#define l import_int_avlf
#define b import_int_bstf

int main(){
    int_bst_node* avl =NULL;
    l.push(&avl, 10);
    l.push(&avl, 30);
    l.push(&avl, 40);
    b.inorder(avl);
return 0;

}