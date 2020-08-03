#include<stdio.h>
#include<stdlib.h>
#include "../dsa.h"

typedef struct hash hash;

struct hash{
        int_list* list;
};

hash* create_hash(int n){
    hash* temp = malloc(n * sizeof(hash));
    for(int i=0; i<n; i++){
        temp[i].list = create_int_list();
    }
    return temp;
}

int key(int data, int total){
    return data % total;
}

void insert_hash(hash* s, int data, int n){
    int i = key(data, n);
    int_list_push(s[i].list, data);
}

int find_hash(hash* s, int data, int n){
    int i = key(data, n);
    int_list_node* list = (s[i].list)->head;
   // int_list_print(s[i].list);
    while( list != NULL){
        if(list->data == data )
            return 1;
        list = list->next;
    }
    return 0;
}

int pop_hash(hash* s, int data, int n){
    int i = key(data, n);
    int_list_node* temp = (s[i].list)->head;
    int pos = 0;
    int ans = -1;
    int_list_print(s[i].list);
    while(temp != NULL){
        ans = temp->data;
        pos++;
        if(temp->data == data){
            int_list_delete(s[i].list, pos);
            return ans; 
        }
        temp = temp->next;
    }
        
    return ans;
}

int main(){
    int n = 5;
    hash* h = create_hash(5);
    insert_hash(h, 3, n);
    insert_hash(h, 4, n);
    insert_hash(h, 5, n);
    insert_hash(h, 6, n);
    insert_hash(h, 10, n);
    insert_hash(h, 0, n);
    insert_hash(h, 100, n);
    pop_hash(h, 100, n);
    pop_hash(h, 5, n);
    if(find_hash(h, 0, n))
        printf("present\n");
    int_list_print(h[0].list);
    return 0;
}