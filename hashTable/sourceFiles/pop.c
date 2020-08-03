int pop_hash(int_hash* s, int data, int n){
    int i = key(data, n);
    int_list_node* temp = (s[i].list)->head;
    int pos = 0;
    int ans = -1;
   // int_list_print(s[i].list);
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
