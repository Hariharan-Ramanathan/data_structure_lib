#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"

int main(void){
//int_bstf l=import_int_bstf();
//#define l  import_int_bstf
struct int_bstf l= import_int_bstf;
int_bst_node* bst=l.create();

	l.push(&bst, 5);
	l.push(&bst, 3);
	l.push(&bst, 10);
	l.push(&bst, 2);
	l.push(&bst, 4);
	l.push(&bst, 0);
	l.push(&bst, 1);
	l.pop(&bst, 0);
	//l.pop(&bst,3);
	//l.pop(&bst,7);
	l.preorder(bst);
	printf("\n");
return 0;
}
