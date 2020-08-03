int find_hash(int_hash* s, int data, int n){
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